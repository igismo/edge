#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <math.h>
#include <errno.h>
#include <netdb.h>

// if using recvmsg to receive datagrams
#include <sys/uio.h>

#define MYPORT   8888
#define MAXLINE  2048
int    myReceiveSocket = 0;
char   receiveBuffer[MAXLINE];
struct sockaddr_in myReceiveAddress;
struct sockaddr_in sourceAddress;
int    sourceAddressLength = sizeof(sourceAddress);
int    receiveLength = 0;
int    timeWait = 0;   // forever = MSG_WAITALL
int    sendSocket = 0;
struct sockaddr_in     destinationAddress;

//--------------------------------------------------------------
// UDP Receive
//--------------------------------------------------------------
unsigned int udpReceiveInit()
{
    // Creating socket file descriptor
    if ( (myReceiveSocket = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        perror("UDP Recv: socket creation failed");
        return 0;
    }

    memset(&myReceiveAddress, 0, sizeof(myReceiveAddress));
    memset(&sourceAddress,    0, sizeof(sourceAddress));
    // Filling server information
    myReceiveAddress.sin_family      = AF_INET; // IPv4
    myReceiveAddress.sin_addr.s_addr = INADDR_ANY;
    myReceiveAddress.sin_port        = htons(MYPORT);

    // Bind the socket with the server address
    if ( bind(myReceiveSocket, (const struct sockaddr *) &myReceiveAddress,
            sizeof(myReceiveAddress)) < 0 )
    {
        perror("UDP Recv: bind failed");
        return 0;
    }
  
    udpReceiveMsgInit(); ///////////////////////////

    return 1;
}

struct sockaddr_storage src_addr;
struct iovec iov[1];
struct msghdr receiveMessage;
void udpReceiveMsgInit()
{
        iov[0].iov_base=receiveBuffer;
        iov[0].iov_len=sizeof(receiveBuffer);

        receiveMessage.msg_name=&src_addr;
        receiveMessage.msg_namelen=sizeof(src_addr);
        receiveMessage.msg_iov=iov;
        receiveMessage.msg_iovlen=1;
        receiveMessage.msg_control=0;
        receiveMessage.msg_controllen=0;
}
unsigned int udpReceiveMsg()
{        
        // printf("START MSG RECEIVE");
        receiveLength = recvmsg(myReceiveSocket, &receiveMessage, MSG_DONTWAIT);
        // printf("END MSG RECEIVE");
        if (receiveLength == -1) {
            return  0;
        } else if (receiveMessage.msg_flags & MSG_TRUNC) {
            printf("datagram too large for buffer: truncated");
        }

        receiveBuffer[receiveLength] = '\0';
        return 1;
}

unsigned int udpReceiveFrom()
{
    receiveLength = recvfrom(myReceiveSocket, (char *) receiveBuffer, MAXLINE, timeWait | SOCK_NONBLOCK	,
                ( struct sockaddr *) &sourceAddress, &sourceAddressLength);
    if (receiveLength  >= 0) {
    	receiveBuffer[receiveLength] = '\0';
	return 1;
    } else
        return 0;
}

unsigned int udpReceiveLoop()
{
  if (myReceiveSocket == 0)
	return 1;

  if (udpReceiveMsg()) {
        printf("UDP Recv: %s\n", receiveBuffer);
  } 
  // millisleep(20);
  return 1;
}

//-------------------------------------------------------------
// UDP Send
//-------------------------------------------------------------
unsigned int udpSendInit()
{
    // Creating socket file descriptor
    if ( (sendSocket = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        perror("UDP Send: socket creation failed");
        return 0;
    }

    memset(&destinationAddress, 0, sizeof(destinationAddress));

    // Filling server information
    destinationAddress.sin_family      = AF_INET;
    destinationAddress.sin_port        = htons(MYPORT);
    destinationAddress.sin_addr.s_addr = INADDR_ANY;
    return 1;
}

unsigned int udpSendMsg(char * sendBuffer)
{
    sendto(sendSocket, (const char *)sendBuffer, strlen(sendBuffer),
        MSG_CONFIRM, (const struct sockaddr *) &destinationAddress,
            sizeof(destinationAddress));
    return 1;
}
#if  NOTNEEDED
//==============================================================
// Initialize UDP receive
// construct the socket address is by calling getaddrinfo
//=============================================================
void udpInitRecv()
{
	const char* hostname=0; /* wildcard */
	const char* portname="daytime";
	struct addrinfo hints;
	memset(&hints,0,sizeof(hints));
	hints.ai_family=AF_UNSPEC;
	hints.ai_socktype=SOCK_DGRAM;
	hints.ai_protocol=0;
	hints.ai_flags=AI_PASSIVE|AI_ADDRCONFIG;
	struct addrinfo* res=0;
	int err=getaddrinfo(hostname,portname,&hints,&res);
	if (err!=0) {
	    die("failed to resolve local socket address (err=%d)",err);
	}

	// Assuming you previously used getaddrinfo to construct the remote 
	// address then the required values can be obtained from the addrinfo structure
	int fd=socket(res->ai_family,res->ai_socktype,res->ai_protocol);
	if (fd==-1) {
	    die("%s",strerror(errno));
	}

	// Bind the local address to the socket
	if (bind(fd,res->ai_addr,res->ai_addrlen)==-1) {
	    die("%s",strerror(errno));
	}

	// If the local address was constructed using getaddrinfo then the memory 
	// occupied by the address list can now be released:
	freeaddrinfo(res);
}
//================================================================
// recvfrom needs a buffer for datagram and a buffer for remote address
// The value returned by recvfrom is the number of bytes received, 
// or -1 if there was an error.
//================================================================
boolean recvUdpFrom()
{
	char buffer[549];
	struct sockaddr_storage src_addr;
	socklen_t src_addr_len=sizeof(src_addr);
	ssize_t count=recvfrom(fd,buffer, sizeof(buffer),
                 0, (struct sockaddr*) &src_addr, &src_addr_len);
	if (count==-1) {
	    die("%s",strerror(errno));
	} else if (count==sizeof(buffer)) {
	    warn("datagram too large for buffer: truncated");
	} else {
	    handle_datagram(buffer,count);
	}
}

//=====================================================================
// Receive and handle datagrams as they arrive using recvmsg
// To call recvmsg, in addition to buffers for the datagram and remote 
// address you must also construct an iovec array and a msghdr structure
//=====================================================================
bollean recvUdpMsg()
{
	char buffer[2048];
	struct sockaddr_storage src_addr;

	struct iovec iov[1];
	iov[0].iov_base=buffer;
	iov[0].iov_len=sizeof(buffer);

	struct msghdr message;
	message.msg_name=&src_addr;
	message.msg_namelen=sizeof(src_addr);
	message.msg_iov=iov;
	message.msg_iovlen=1;
	message.msg_control=0;
	message.msg_controllen=0;

	ssize_t count=recvmsg(fd,&message,0);
	if (count==-1) {
	    die("%s",strerror(errno));
	} else if (message.msg_flags&MSG_TRUNC) {
	    warn("datagram too large for buffer: truncated");
	} else {
	    handle_datagram(buffer,count);
	}

}


//=====================================================================
// Connecting to a remote host
// Calling connect on a UDP socket does not (by itself) result in any network activity.
// The call to connect will succeed even if the remote machine is unreachable or nonexistant.
//=====================================================================
void connectToHost()
{
	if (connect(fd,remote_addr,sizeof(remote_addr))==-1) {
	    die("%s",strerror(errno));
	}
}

//======================================================================
// Initialize sending
//======================================================================
void initUdpSend()
{
	const char* hostname=0; /* localhost */
	const char* portname="daytime";
	struct addrinfo hints;
	memset(&hints,0,sizeof(hints));
	hints.ai_family=AF_UNSPEC;
	hints.ai_socktype=SOCK_DGRAM;
	hints.ai_protocol=0;
	hints.ai_flags=AI_ADDRCONFIG;
	struct addrinfo* res=0;
	int err=getaddrinfo(hostname,portname,&hints,&res);
	if (err!=0) {
	    die("failed to resolve remote socket address (err=%d)",err);
	}

	// Create the client socket.
	int fd=socket(res->ai_family,res->ai_socktype,res->ai_protocol);
	if (fd==-1) {
	    die("%s",strerror(errno));
	}
}
//=======================================================================
// Send a UDP datagram  using   sendto()
// The value returned by sendto is the number of bytes sent, 
// or -1 if there was an error.
//=======================================================================
void udpSendTo()
{
	if (sendto(fd,content,sizeof(content),0,
	    res->ai_addr,res->ai_addrlen)==-1) {
	    die("%s",strerror(errno));
	}
}
//=======================================================================
// Send a UDP datagram  using   sendmsg()
//=======================================================================
void udpSendMsg()
{
	struct iovec iov[1];
	iov[0].iov_base=content;
	iov[0].iov_len=sizeof(content);

	struct msghdr message;
	message.msg_name=res->ai_addr;
	message.msg_namelen=res->ai_addrlen;
	message.msg_iov=iov;
	message.msg_iovlen=1;
	message.msg_control=0;
	message.msg_controllen=0;

	if (sendmsg(fd,&message,0)==-1) {
	    die("%s",strerror(errno));
	}
}
#endif

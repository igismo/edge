/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

/* AIX requires this to be the first thing in the file.  */
#ifndef __GNUC__
# if HAVE_ALLOCA_H
#  include <alloca.h>
# else
#  ifdef _AIX
#pragma alloca
#  else
#   ifndef alloca /* predefined by HP cc +Olibcalls */
char *alloca ();
#   endif
#  endif
# endif
#endif

/* ACCEPT_ARG3_TYPE should be the datatype of the 3rd arg to the 'accept'
   system call. It's 'int' on some systems, 'unsigned long' on some, and could
   be something else on others. Default to int */
#define ACCEPT_ARG3_TYPE socklen_t

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to 1 if we are compiling for AIX */
/* #undef AIX */

/* Define to 0 to use polar meshes for drawing of spheres */
#define BEZIER_SPHERES 0

/* Define to 1 if the `closedir' function returns void instead of `int'. */
/* #undef CLOSEDIR_VOID */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* D1 debugging? */
#define D1_DEBUG 0

/* Define to the name of the html browser for online viewing of the HTML
   manual. */
#define DFLTHTMLBROWSER "firefox"

/* Define to the name of the html browser for online viewing of the PDF
   manual. */
#define DFLTPDFVIEWER "xpdf"

/* "Define to the root of the Geomview documentation" */
#define DOCDIR "/usr/local/share/doc/geomview"

/* Use experimental motion averaging code? */
#define EXPERIMENTAL_MOTION_AVERAGING 0

/* Define to path and arguments of shell used for file name globbing */
#define GLOB_SHELL "/bin/sh -c "

/* Define to 1 if you have the `accept' function. */
#define HAVE_ACCEPT 1

/* Define to 1 if you have the `acosh' function. */
#define HAVE_ACOSH 1

/* Define to 1 if you have the `alarm' function. */
#define HAVE_ALARM 1

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the `basename' function. */
#define HAVE_BASENAME 1

/* Define to 1 if you have the `bcopy' function. */
#define HAVE_BCOPY 1

/* Define to 1 if you have the `bind' function. */
#define HAVE_BIND 1

/* Define to 1 if you have the `bzero' function. */
#define HAVE_BZERO 1

/* Define to 1 if you have the `compressBound' function. */
#define HAVE_COMPRESSBOUND 1

/* Define to 1 if you have the `connect' function. */
#define HAVE_CONNECT 1

/* Define to 1 if you have the declaration of `accept', and to 0 if you don't.
   */
#define HAVE_DECL_ACCEPT 1

/* Define to 1 if you have the declaration of `acosh', and to 0 if you don't.
   */
#define HAVE_DECL_ACOSH 0

/* Define to 1 if you have the declaration of `errno', and to 0 if you don't.
   */
#define HAVE_DECL_ERRNO 1

/* Define to 1 if you have the declaration of `fmemopen', and to 0 if you
   don't. */
#define HAVE_DECL_FMEMOPEN 1

/* Define to 1 if you have the declaration of `getopt', and to 0 if you don't.
   */
#define HAVE_DECL_GETOPT 1

/* Define to 1 if you have the declaration of `LC_ALL', and to 0 if you don't.
   */
#define HAVE_DECL_LC_ALL 1

/* Define to 1 if you have the declaration of `llseek', and to 0 if you don't.
   */
#define HAVE_DECL_LLSEEK 0

/* Define to 1 if you have the declaration of `lseek', and to 0 if you don't.
   */
#define HAVE_DECL_LSEEK 1

/* Define to 1 if you have the declaration of `lseek64', and to 0 if you
   don't. */
#define HAVE_DECL_LSEEK64 1

/* Define to 1 if you have the declaration of `optarg', and to 0 if you don't.
   */
#define HAVE_DECL_OPTARG 1

/* Define to 1 if you have the declaration of `opterr', and to 0 if you don't.
   */
#define HAVE_DECL_OPTERR 1

/* Define to 1 if you have the declaration of `optind', and to 0 if you don't.
   */
#define HAVE_DECL_OPTIND 1

/* Define to 1 if you have the declaration of `optopt', and to 0 if you don't.
   */
#define HAVE_DECL_OPTOPT 1

/* Define to 1 if you have the declaration of `putenv', and to 0 if you don't.
   */
#define HAVE_DECL_PUTENV 1

/* Define to 1 if you have the declaration of `select', and to 0 if you don't.
   */
#define HAVE_DECL_SELECT 1

/* Define to 1 if you have the declaration of `strcasecmp', and to 0 if you
   don't. */
#define HAVE_DECL_STRCASECMP 1

/* Define to 1 if you have the declaration of `strdup', and to 0 if you don't.
   */
#define HAVE_DECL_STRDUP 1

/* Define to 1 if you have the declaration of `strncasecmp', and to 0 if you
   don't. */
#define HAVE_DECL_STRNCASECMP 1

/* Define to 1 if the system has the type `dev_t'. */
#define HAVE_DEV_T 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dirname' function. */
#define HAVE_DIRNAME 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the `dup2' function. */
#define HAVE_DUP2 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `finite' function. */
#define HAVE_FINITE 1

/* Define to 1 if you have the `floor' function. */
#define HAVE_FLOOR 1

/* Define to 1 if you have the `fmemopen' function. */
#define HAVE_FMEMOPEN 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `fstat' function. */
#define HAVE_FSTAT 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getopt' function. */
#define HAVE_GETOPT 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `glXCreateGLXPixmap' function. */
#define HAVE_GLXCREATEGLXPIXMAP 1

/* Define to 1 if IPv6 sockets are available */
#define HAVE_INET6_SOCKETS 1

/* Define to 1 if IPv4 sockets are available */
#define HAVE_INET_SOCKETS 1

/* Define to 1 if the system has the type `ino_t'. */
#define HAVE_INO_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <io.h> header file. */
/* #undef HAVE_IO_H */

/* Define to 1 if you have the `isascii' function. */
#define HAVE_ISASCII 1

/* Define to 1 if ISO C99 features are available (e.g. variadic macros and
   variable length arrays) */
#define HAVE_ISO_C99 1

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if you have libGLU */
#define HAVE_LIBGLU 1

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have libz */
#define HAVE_LIBZ 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `listen' function. */
#define HAVE_LISTEN 1

/* Define to 1 if you have the `llseek' function. */
/* #undef HAVE_LLSEEK */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if the system has the type `loff_t'. */
#define HAVE_LOFF_T 1

/* Define to 1 if you have the `lseek' function. */
#define HAVE_LSEEK 1

/* Define to 1 if you have the `lseek64' function. */
#define HAVE_LSEEK64 1

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* Define to 1 if `lstat' has the bug that it succeeds when given the
   zero-length file name argument. */
/* #undef HAVE_LSTAT_EMPTY_STRING_BUG */

/* Define to 1 if you have the `mallinfo' function. */
#define HAVE_MALLINFO 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* Define to 1 if M_PI is defined */
#define HAVE_M_PI 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if libc includes obstacks. */
#define HAVE_OBSTACK 1

/* Define to 1 if the system has the type `off64_t'. */
#define HAVE_OFF64_T 1

/* Define to 1 if the system has the type `off_t'. */
#define HAVE_OFF_T 1

/* pamtotiff program */
/* #undef HAVE_PAMTOTIFF */

/* Define to 1 if you have the `popen' function. */
#define HAVE_POPEN 1

/* Define to 1 if you have the `pow' function. */
#define HAVE_POW 1

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the `read' function. */
#define HAVE_READ 1

/* Define to 1 if you have the `rint' function. */
#define HAVE_RINT 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define to 1 if the system has the type `socklen_t'. */
#define HAVE_SOCKLEN_T 1

/* Define to 1 if you have the `sqrt' function. */
#define HAVE_SQRT 1

/* Define to 1 if you have the `stat' function. */
#define HAVE_STAT 1

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
/* #undef HAVE_STAT_EMPTY_STRING_BUG */

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strcspn' function. */
#define HAVE_STRCSPN 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strpbrk' function. */
#define HAVE_STRPBRK 1

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `sysinfo' function. */
#define HAVE_SYSINFO 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/systeminfo.h> header file. */
/* #undef HAVE_SYS_SYSTEMINFO_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if the system has the type `time_t'. */
#define HAVE_TIME_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if Unix domain sockets are available */
#define HAVE_UNIX_SOCKETS 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vfscanf' function. */
#define HAVE_VFSCANF 1

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `wait3' function. */
#define HAVE_WAIT3 1

/* Define to 1 if you have the `waitpid' function. */
#define HAVE_WAITPID 1

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* Define to 1 if you have the `write' function. */
#define HAVE_WRITE 1

/* Does -lXmu exist on this system? */
#define HAVE_XMU 1

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
#define LSTAT_FOLLOWS_SLASHED_SYMLINK 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to the machine type */
#define MACHTYPE "x86_64-pc-linux-gnu"

/* Define to 1 if your are using the Mesa OpenGL implementation */
#define MESAGL 0

/* Leave this at 0 */
#define MGGL 0

/* Define to 1 if OpenGL (or Mesa or anything equivalent) is available and
   should be used for rendering */
#define MGOPENGL 1

/* Define to 1 if all rendering should be performed through the X library
   (i.e. no accelerated 3D rendering, no textures) */
#define MGX11 1

/* Name of package */
#define PACKAGE "geomview"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "Claus-Justus Heine <Claus-Justus.Heine@IANS.Uni-Stuttgart.DE>"

/* Define to the full name of this package. */
#define PACKAGE_NAME "geomview"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "geomview 1.9.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "geomview"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.9.5"

/* Define to 1 if popen(CMD, MODE) accepts "rb" for MODE */
/* #undef POPEN_ACCEPTS_RB */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to the type of arg 1 for `select'. */
#define SELECT_TYPE_ARG1 int

/* Define to the type of args 2, 3 and 4 for `select'. */
#define SELECT_TYPE_ARG234 (fd_set *)

/* Define to the type of arg 5 for `select'. */
#define SELECT_TYPE_ARG5 (struct timeval *)

/* Define to 1 if the `setpgrp' function takes no argument. */
#define SETPGRP_VOID 1

/* The size of `dev_t', as computed by sizeof. */
#define SIZEOF_DEV_T 8

/* The size of `ino_t', as computed by sizeof. */
#define SIZEOF_INO_T 8

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 8

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Version number of package */
#define VERSION "1.9.5"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
/* #undef YYTEXT_POINTER */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to 1 if we are compiling for sgi */
/* #undef sgi */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to 1 if we are compiling for unix??? */
/* #undef unix */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */

#if D1_DEBUG
#define D1PRINT(args) printf args
#else
#define D1PRINT(args)
#endif

#define _FILE_OFFSET_BITS 64
#define _LARGEFILE64_SOURCE

#if !HAVE_WORKING_FORK
# error FIXME! We need fork()
#endif

#if !HAVE_LSTAT || \
    !LSTAT_FOLLOWS_SLASHED_SYMLINK || \
    HAVE_LSTAT_EMPTY_STRING_BUG 
# define lstat(path, buf) gv_lstat(path, buf)
#endif

#if !HAVE_STAT || HAVE_STAT_EMPTY_STRING_BUG 
# define stat(path, buf) gv_stat(path, buf)
# define fstat(fd, buf) gv_fstat(fd, buf)
#endif

#if HAVE_MATH_H
# include <math.h>
#endif

#ifdef isfinite
# ifdef finite
/* #  undef finite */
# endif
# define finite(x) isfinite(x)
#endif

#ifdef HAVE_STDBOOL_H
# include <stdbool.h>
#else
# ifndef HAVE__BOOL
#  ifdef __cplusplus
typedef bool _Bool;
#  else
#   define _Bool signed char
#  endif
# endif
# define bool _Bool
# define false 0
# define true 1
# define __bool_true_false_are_defined 1
#endif

/* make sure we have PATH_MAX */
#if HAVE_LIMITS_H
# include <limits.h>
#endif
#if HAVE_SYS_PARAM
# include <sys/param.h>
#endif
#ifndef PATH_MAX
# ifndef _POSIX_PATH_MAX
#  ifndef MAXPATHLEN
#   define PATH_MAX 4096
#  else
#   define PATH_MAX MAXPATHLEN
#  endif
# else
#  define PATH_MAX _POSIX_PATH_MAX
# endif
#endif

#if HAVE_ISO_C99
# define VARARRAY(name, type, len) type name[len]
# define VARARRAY2(name, type, len1, len2) type name[len1][len2]
#else
# define VARARRAY(name, type, len) type *name = alloca((len)*sizeof(type))
# define VARARRAY2(name, type, len1, len2) \
  type (*name)[len2] = alloca((len1)*(len2)*sizeof(type))
#endif

#if 0
#ifdef HAVE_SYS_TYPES_H
# include <sys/types.h>
#endif
#ifdef HAVE_STDLIB_H
# include <stdlib.h>
#endif
#ifdef HAVE_STRING_H
# include <string.h>
#endif

/* #undef malloc */
/* #undef free */
/* #undef realloc */
/* #undef calloc */
/* #undef strdup */

extern void *malloc_record(size_t size,
                           const char *file, const char *func, int line);
extern void *realloc_record(void *ptr, size_t size,
			    const char *file, const char *func, int line);
extern void *calloc_record(size_t nmemb, size_t size,
	 		   const char *file, const char *func, int line);
extern char *strdup_record(const char *string,
                           const char *file, const char *func, int line);
extern void free_record(void *ptr);

#define malloc(size) malloc_record(size, __FILE__, __FUNCTION__, __LINE__)
#define realloc(ptr, size) realloc_record(ptr, size, __FILE__, __FUNCTION__, __LINE__)
#define calloc(nmemb, size) calloc_record(nmemb, size, __FILE__, __FUNCTION__, __LINE__)
#define strdup(str) strdup_record(str, __FILE__, __FUNCTION__, __LINE__)
#define free(ptr) free_record(ptr)

#define OOG_NewP(size)            malloc(size)
#define OOG_RenewP(p, size)       realloc(p, size)
#define OOG_NewE(size, blah)      malloc(size)
#define OOG_RenewE(p, size, blah) realloc(p, size)
#define OOGLFree(p)               free(p)

#endif

#endif /* CONFIG_H_INCLUDED */


LObject * l_quote(LObject * a1)
{
  LObject *val = LEvalFunc("quote",
			   LLOBJECT, a1,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_eval(LObject * a1)
{
  LObject *val = LEvalFunc("eval",
			   LLOBJECT, a1,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_lambda(LList  * a1, LList * a2)
{
  LObject *val = LEvalFunc("lambda",
			   LLIST, a1,
			   LREST, a2,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_let(LList * a1)
{
  LObject *val = LEvalFunc("let",
			   LREST, a1,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_defun(char * a1, LList  * a2, LList * a3)
{
  LObject *val = LEvalFunc("defun",
			   LSYMBOL, a1,
			   LLIST, a2,
			   LREST, a3,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_setq(LObject * a1, LObject * a2)
{
  LObject *val = LEvalFunc("setq",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

void l_while(LObject * a1, LObject * a2)
{
  LObject *val = LEvalFunc("while",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LEND);
  LFree(val);
}

LObject * l_if(LObject * a1, LObject * a2, LObject * a3)
{
  LObject *val = LEvalFunc("if",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LLOBJECT, a3,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

int l_not(LObject * a1)
{
  LObject *val = LEvalFunc("not",
			   LLOBJECT, a1,
			   LEND);
  int retval;
  LFROMOBJ(LINT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_or(LObject * a1, LObject * a2)
{
  LObject *val = LEvalFunc("or",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_and(LObject * a1, LObject * a2)
{
  LObject *val = LEvalFunc("and",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_greater(LObject * a1, LObject * a2)
{
  LObject *val = LEvalFunc(">",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

int l_less(LObject * a1, LObject * a2)
{
  LObject *val = LEvalFunc("<",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LEND);
  int retval;
  LFROMOBJ(LINT)(val, &retval);
  LFree(val);
  return retval;
}

int l_equal(LObject * a1, LObject * a2)
{
  LObject *val = LEvalFunc("=",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LEND);
  int retval;
  LFROMOBJ(LINT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_add(LObject * a1, LObject * a2)
{
  LObject *val = LEvalFunc("+",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_substract(LObject * a1, LObject * a2)
{
  LObject *val = LEvalFunc("-",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_multiply(LObject * a1, LObject * a2)
{
  LObject *val = LEvalFunc("*",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_divide(LObject * a1, LObject * a2)
{
  LObject *val = LEvalFunc("/",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_remainder(LObject * a1, LObject * a2)
{
  LObject *val = LEvalFunc("mod",
			   LLOBJECT, a1,
			   LLOBJECT, a2,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_truncate(LObject * a1)
{
  LObject *val = LEvalFunc("truncate",
			   LLOBJECT, a1,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

int l_sgi()
{
  LObject *val = LEvalFunc("sgi",
			   LEND);
  int retval;
  LFROMOBJ(LINT)(val, &retval);
  LFree(val);
  return retval;
}

int l_NeXT()
{
  LObject *val = LEvalFunc("NeXT",
			   LEND);
  int retval;
  LFROMOBJ(LINT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_progn(LList * a1)
{
  LObject *val = LEvalFunc("progn",
			   LREST, a1,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_EvalLambda(LObject * a1, LList * a2)
{
  LObject *val = LEvalFunc("\a\bEvalLambda",
			   LLOBJECT, a1,
			   LREST, a2,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_EvalDefun(LList * a1)
{
  LObject *val = LEvalFunc("\a\bEvalDefun",
			   LREST, a1,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_car(LList  * a1)
{
  LObject *val = LEvalFunc("car",
			   LLIST, a1,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_cdr(LList  * a1)
{
  LObject *val = LEvalFunc("cdr",
			   LLIST, a1,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

LObject * l_cons(LObject * a1, LList  * a2)
{
  LObject *val = LEvalFunc("cons",
			   LLOBJECT, a1,
			   LLIST, a2,
			   LEND);
  LObject * retval;
  LFROMOBJ(LLOBJECT)(val, &retval);
  LFree(val);
  return retval;
}

void l_interest(LList  * a1)
{
  LObject *val = LEvalFunc("interest",
			   LLIST, a1,
			   LEND);
  LFree(val);
}

void l_uninterest(LList  * a1)
{
  LObject *val = LEvalFunc("uninterest",
			   LLIST, a1,
			   LEND);
  LFree(val);
}

void l_time_interests(float a1, char * a2, char * a3, char * a4)
{
  LObject *val = LEvalFunc("time-interests",
			   LFLOAT, a1,
			   LSTRING, a2,
			   LSTRING, a3,
			   LSTRING, a4,
			   LEND);
  LFree(val);
}

void l_regtable()
{
  LObject *val = LEvalFunc("regtable",
			   LEND);
  LFree(val);
}

void l_help(char * a1)
{
  LObject *val = LEvalFunc("help",
			   LSTRING, a1,
			   LEND);
  LFree(val);
}

void l_morehelp(char * a1)
{
  LObject *val = LEvalFunc("morehelp",
			   LSTRING, a1,
			   LEND);
  LFree(val);
}


extern LObject *Lquote(Lake *, LList *);
extern LObject *Leval(Lake *, LList *);
extern LObject *Llambda(Lake *, LList *);
extern LObject *Llet(Lake *, LList *);
extern LObject *Ldefun(Lake *, LList *);
extern LObject *Lsetq(Lake *, LList *);
extern LObject *Lwhile(Lake *, LList *);
extern LObject *Lif(Lake *, LList *);
extern LObject *Lnot(Lake *, LList *);
extern LObject *Lor(Lake *, LList *);
extern LObject *Land(Lake *, LList *);
extern LObject *Lgreater(Lake *, LList *);
extern LObject *Lless(Lake *, LList *);
extern LObject *Lequal(Lake *, LList *);
extern LObject *Ladd(Lake *, LList *);
extern LObject *Lsubstract(Lake *, LList *);
extern LObject *Lmultiply(Lake *, LList *);
extern LObject *Ldivide(Lake *, LList *);
extern LObject *Lremainder(Lake *, LList *);
extern LObject *Ltruncate(Lake *, LList *);
extern LObject *Lsgi(Lake *, LList *);
extern LObject *LNeXT(Lake *, LList *);
extern LObject *Lprogn(Lake *, LList *);
extern LObject *LEvalLambda(Lake *, LList *);
extern LObject *LEvalDefun(Lake *, LList *);
extern LObject *Lcar(Lake *, LList *);
extern LObject *Lcdr(Lake *, LList *);
extern LObject *Lcons(Lake *, LList *);
extern LObject *Linterest(Lake *, LList *);
extern LObject *Luninterest(Lake *, LList *);
extern LObject *Ltime_interests(Lake *, LList *);
extern LObject *Lregtable(Lake *, LList *);
extern LObject *Lhelp(Lake *, LList *);
extern LObject *Lmorehelp(Lake *, LList *);

extern char Hquote[];
extern char Heval[];
extern char Hlambda[];
extern char Hlet[];
extern char Hdefun[];
extern char Hsetq[];
extern char Hwhile[];
extern char Hif[];
extern char Hnot[];
extern char Hor[];
extern char Hand[];
extern char Hgreater[];
extern char Hless[];
extern char Hequal[];
extern char Hadd[];
extern char Hsubstract[];
extern char Hmultiply[];
extern char Hdivide[];
extern char Hremainder[];
extern char Htruncate[];
extern char Hsgi[];
extern char HNeXT[];
extern char Hprogn[];
extern char HEvalLambda[];
extern char HEvalDefun[];
extern char Hcar[];
extern char Hcdr[];
extern char Hcons[];
extern char Hinterest[];
extern char Huninterest[];
extern char Htime_interests[];
extern char Hregtable[];
extern char Hhelp[];
extern char Hmorehelp[];


void clisp_init()
{
  LDefun("quote", Lquote, Hquote);
  LDefun("eval", Leval, Heval);
  LDefun("lambda", Llambda, Hlambda);
  LDefun("let", Llet, Hlet);
  LDefun("defun", Ldefun, Hdefun);
  LDefun("setq", Lsetq, Hsetq);
  LDefun("while", Lwhile, Hwhile);
  LDefun("if", Lif, Hif);
  LDefun("not", Lnot, Hnot);
  LDefun("or", Lor, Hor);
  LDefun("and", Land, Hand);
  LDefun(">", Lgreater, Hgreater);
  LDefun("<", Lless, Hless);
  LDefun("=", Lequal, Hequal);
  LDefun("+", Ladd, Hadd);
  LDefun("-", Lsubstract, Hsubstract);
  LDefun("*", Lmultiply, Hmultiply);
  LDefun("/", Ldivide, Hdivide);
  LDefun("mod", Lremainder, Hremainder);
  LDefun("truncate", Ltruncate, Htruncate);
  LDefun("sgi", Lsgi, Hsgi);
  LDefun("NeXT", LNeXT, HNeXT);
  LDefun("progn", Lprogn, Hprogn);
  LDefun("\a\bEvalLambda", LEvalLambda, HEvalLambda);
  LDefun("\a\bEvalDefun", LEvalDefun, HEvalDefun);
  LDefun("car", Lcar, Hcar);
  LDefun("cdr", Lcdr, Hcdr);
  LDefun("cons", Lcons, Hcons);
  LDefun("interest", Linterest, Hinterest);
  LDefun("uninterest", Luninterest, Huninterest);
  LDefun("time-interests", Ltime_interests, Htime_interests);
  LDefun("regtable", Lregtable, Hregtable);
  LDefun("help", Lhelp, Hhelp);
  LDefun("morehelp", Lmorehelp, Hmorehelp);
}


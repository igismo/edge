/* Copyright (C) 1992-1998 The Geometry Center
 * Copyright (C) 1998-2000 Stuart Levy, Tamara Munzner, Mark Phillips
 *
 * This file is part of Geomview.
 * 
 * Geomview is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * Geomview is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with Geomview; see the file COPYING.  If not, write
 * to the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139,
 * USA, or visit http://www.gnu.org.
 */
/* expression, version 1.0 */

typedef int expr_var;
typedef struct {
  double real;
  double imag;
} fcomplex;

struct expression {
  int nvars;
  char **varnames;
  fcomplex *varvals;
  int nelem;			/* number of elements in the vector. */
  struct expr_elem *elems;
};

typedef double (*func_double)(double);
typedef double (*func_double_double)(double, double);

typedef void (*func_complex)(const fcomplex *source, fcomplex*result);
typedef void (*func_complex_complex)(const fcomplex *source1, const fcomplex *source2, fcomplex*result);

struct expr_elem {
  enum expr_op {
    MONOP,
    BINOP,
    MONFUNC,
    BINFUNC,
    PUSHVAR,
    PUSHNUM
  } op;
  union {
    struct {
      char op;
    } monop;
    struct {
      char op;
    } binop;
    struct {
      func_double func;
      func_complex cfunc;
    } monfunc;
    struct {
      func_double_double func;
      func_complex_complex cfunc;
    } binfunc;
    struct {
      int varnum;
    } pushvar;
    struct {
      double number;
    } pushnum;
  } u;
};

extern struct expression *expr_new(void);
extern void     expr_free(struct expression *);
extern char    *expr_parse(struct expression *expr, char *e);
extern double   expr_evaluate(struct expression *e);
extern void     expr_evaluate_some(struct expression *e, expr_var v,
				   double min, double max, int npoints,
				   double *buffer);
extern void     expr_evaluate_complex(struct expression *e, fcomplex *op);
extern expr_var expr_create_variable(struct expression *e, char *name,
				     double val);
extern void     expr_set_variable(struct expression *e, expr_var v,
				  double val);
extern void     expr_set_variable_complex(struct expression *e, expr_var v,
					  fcomplex *val);
extern double   expr_get_variable(struct expression *e, expr_var v);
extern void     expr_get_variable_complex(struct expression *e, expr_var v,
					  fcomplex *op);
extern void     expr_copy_variables(struct expression *source, struct expression *dest);


extern struct expr_monfunc {
  char *name;
  func_double func;
  func_complex cfunc;
} expr_monfuncs[];

extern struct expr_binfunc {
  char *name;
  func_double_double func;
  func_complex_complex cfunc;
} expr_binfuncs[];


extern void fcomplex_re(const fcomplex *, fcomplex *);
extern void fcomplex_im(const fcomplex *, fcomplex *);
extern void fcomplex_abs(const fcomplex *, fcomplex *);
extern void fcomplex_log(const fcomplex *, fcomplex *);
extern void fcomplex_log10(const fcomplex *, fcomplex *);
extern void fcomplex_sqrt(const fcomplex *, fcomplex *);
extern void fcomplex_cos(const fcomplex *, fcomplex *);
extern void fcomplex_arccos(const fcomplex *, fcomplex *);
extern void fcomplex_sin(const fcomplex *, fcomplex *);
extern void fcomplex_arcsin(const fcomplex *, fcomplex *);
extern void fcomplex_tan(const fcomplex *, fcomplex *);
extern void fcomplex_arctan(const fcomplex *, fcomplex *);
extern void fcomplex_cot(const fcomplex *, fcomplex *);
extern void fcomplex_sec(const fcomplex *, fcomplex *);
extern void fcomplex_csc(const fcomplex *, fcomplex *);
extern void fcomplex_cosh(const fcomplex *, fcomplex *);
extern void fcomplex_sinh(const fcomplex *, fcomplex *);
extern void fcomplex_tanh(const fcomplex *, fcomplex *);
extern void fcomplex_arccosh(const fcomplex *, fcomplex *);
extern void fcomplex_arcsinh(const fcomplex *, fcomplex *);
extern void fcomplex_arctanh(const fcomplex *, fcomplex *);
extern void fcomplex_floor(const fcomplex *, fcomplex *);
extern void fcomplex_round(const fcomplex *, fcomplex *);
extern void fcomplex_ceiling(const fcomplex *, fcomplex *);
extern void fcomplex_exp(const fcomplex *, fcomplex *);

extern void fcomplex_pow(const fcomplex *, const fcomplex *, fcomplex *);
extern void fcomplex_atan2(const fcomplex *, const fcomplex *, fcomplex *);

extern double freal_re(double);
extern double freal_im(double);
extern double freal_cot(double);
extern double freal_sec(double);
extern double freal_csc(double);

extern void fcomplex_monstub(const fcomplex *,fcomplex *);
extern void fcomplex_binstub(const fcomplex *, const fcomplex *, fcomplex *);
extern double freal_monstub(double);
extern double freal_binstub(double,double);

#define DEFAULT_EXPR_MONFUNCS \
  {"re",     freal_re,      fcomplex_re}, \
  {"im",     freal_im,      fcomplex_im}, \
  {"abs",         fabs,     fcomplex_abs}, \
  {"log",          log,     fcomplex_log}, \
  {"log10",        log10,   fcomplex_log10}, \
  {"sqrt",         sqrt,    fcomplex_sqrt}, \
  {"cos",          cos,     fcomplex_cos}, \
  {"arccos",       acos,    fcomplex_arccos}, \
  {"sin",          sin,     fcomplex_sin}, \
  {"arcsin",       asin,    fcomplex_arcsin}, \
  {"tan",          tan,     fcomplex_tan}, \
  {"arctan",       atan,    fcomplex_arctan}, \
  {"cot",    freal_cot,     fcomplex_cot}, \
  {"sec",    freal_sec,     fcomplex_sec}, \
  {"csc",    freal_csc,     fcomplex_csc}, \
  {"cosh",         cosh,    fcomplex_cosh}, \
  {"sinh",         sinh,    fcomplex_sinh}, \
  {"tanh",         tanh,    fcomplex_tanh}, \
  {"arccosh",      acosh,   fcomplex_arccosh}, \
  {"arcsinh",      asinh,   fcomplex_arcsinh}, \
  {"arctanh",      atanh,   fcomplex_arctanh}, \
  {"floor",        floor,   fcomplex_floor}, \
  {"round",        rint,    fcomplex_round}, \
  {"ceiling",      ceil,    fcomplex_ceiling}, \
  {"exp",          exp,     fcomplex_exp}

#define DEFAULT_EXPR_BINFUNCS \
  {"pow", pow, fcomplex_pow}, \
  {"arctan2", atan2, fcomplex_atan2}


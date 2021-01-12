/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int wafsadebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum wafsatokentype {
     FORMAT = 258,
     FSA = 259,
     STATES = 260,
     SYMBOLS = 261,
     BFS = 262,
     MIN = 263,
     VARIABLES = 264,
     ALPHABET = 265,
     START = 266,
     ATABLE = 267,
     INVERSES = 268,
     INV = 269,
     LEFT_BRACE = 270,
     RIGHT_BRACE = 271,
     LEFT_PAREN = 272,
     RIGHT_PAREN = 273,
     SEMICOLON = 274,
     PERCENT = 275,
     INT = 276,
     EQUAL = 277,
     STRING = 278,
     REAL = 279
   };
#endif
/* Tokens.  */
#define FORMAT 258
#define FSA 259
#define STATES 260
#define SYMBOLS 261
#define BFS 262
#define MIN 263
#define VARIABLES 264
#define ALPHABET 265
#define START 266
#define ATABLE 267
#define INVERSES 268
#define INV 269
#define LEFT_BRACE 270
#define RIGHT_BRACE 271
#define LEFT_PAREN 272
#define RIGHT_PAREN 273
#define SEMICOLON 274
#define PERCENT 275
#define INT 276
#define EQUAL 277
#define STRING 278
#define REAL 279



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define wafsastype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE wafsalval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int wafsaparse (void *YYPARSE_PARAM);
#else
int wafsaparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int wafsaparse (void);
#else
int wafsaparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

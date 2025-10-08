/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KW_CHAR = 258,
     KW_UNSIGNED = 259,
     KW_SHORT = 260,
     KW_INT = 261,
     KW_LONG = 262,
     KW_FLOAT = 263,
     KW_VOID = 264,
     KW_FOR = 265,
     KW_DOUBLE = 266,
     KW_IF = 267,
     KW_ELSE = 268,
     KW_WHILE = 269,
     KW_DO = 270,
     KW_STRUCT = 271,
     INTEGER_CONST = 272,
     FLOAT_CONST = 273,
     IDENT = 274,
     STRING_CONST = 275,
     CHARACTER_CONST = 276,
     INC = 277,
     DEC = 278,
     LE = 279,
     GE = 280,
     EQ = 281
   };
#endif
/* Tokens.  */
#define KW_CHAR 258
#define KW_UNSIGNED 259
#define KW_SHORT 260
#define KW_INT 261
#define KW_LONG 262
#define KW_FLOAT 263
#define KW_VOID 264
#define KW_FOR 265
#define KW_DOUBLE 266
#define KW_IF 267
#define KW_ELSE 268
#define KW_WHILE 269
#define KW_DO 270
#define KW_STRUCT 271
#define INTEGER_CONST 272
#define FLOAT_CONST 273
#define IDENT 274
#define STRING_CONST 275
#define CHARACTER_CONST 276
#define INC 277
#define DEC 278
#define LE 279
#define GE 280
#define EQ 281




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "c.y"
{ 
  char s[MAX_STR_LEN + 1]; /* text field for names etc. */
  int i; /* interger field */
  double d; /* floating point field */
}
/* Line 1529 of yacc.c.  */
#line 107 "c.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


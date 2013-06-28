/* A Bison parser, made by GNU Bison 2.3-rofi.  */

/* Skeleton interface for Bison GLR parsers in C

   Copyright (C) 2002, 2003, 2004, 2005, 2006 Free Software Foundation, Inc.

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
     ADD_ASSIGN = 258,
     ANDAND = 259,
     AND_ASSIGN = 260,
     ASM = 261,
     AUTO = 262,
     BOOL = 263,
     BOOLEAN_LITERAL = 264,
     BREAK = 265,
     CASE = 266,
     CHAR = 267,
     CHARACTER_LITERAL = 268,
     CONST = 269,
     CONTINUE = 270,
     DECIMAL_LITERAL = 271,
     DEFAULT = 272,
     DIV_ASSIGN = 273,
     DO = 274,
     DOUBLE = 275,
     ELSE = 276,
     ENUM = 277,
     EQUAL = 278,
     EXTERN = 279,
     FLOAT = 280,
     FLOATING_LITERAL = 281,
     HEXADECIMAL_FLOAT = 282,
     FOR = 283,
     GOTO = 284,
     GREATER_OR_EQUAL = 285,
     HEXADECIMAL_LITERAL = 286,
     IDENTIFIER = 287,
     IF = 288,
     INLINE = 289,
     INT = 290,
     LEFT = 291,
     LEFT_ASSIGN = 292,
     LESS_OR_EQUAL = 293,
     LONG = 294,
     MINUSMINUS = 295,
     MOD_ASSIGN = 296,
     MUL_ASSIGN = 297,
     NOT_EQUAL = 298,
     OCTAL_LITERAL = 299,
     OR_ASSIGN = 300,
     OROR = 301,
     PLUSPLUS = 302,
     PTR_OP = 303,
     REGISTER = 304,
     RETURN = 305,
     RIGHT = 306,
     RIGHT_ASSIGN = 307,
     SHORT = 308,
     SIGNED = 309,
     SIZEOF = 310,
     STATIC = 311,
     STRING_LITERAL = 312,
     STRUCT = 313,
     SUB_ASSIGN = 314,
     SWITCH = 315,
     ELLIPSIS = 316,
     TYPEDEF = 317,
     UNION = 318,
     UNSIGNED = 319,
     VOID = 320,
     VOLATILE = 321,
     WHILE = 322,
     XOR_ASSIGN = 323,
     UNKNOWN_PRAGMA = 324,
     PP_COMMENT = 325,
     PP_TOKEN = 326,
     BUILTIN_VA_ARG = 327,
     BUILTIN_OFFSETOF = 328,
     BUILTIN_CHOOSE_EXPR = 329,
     BUILTIN_TYPES_COMPATIBLE_P = 330,
     ALIGNOF = 331,
     EXTENSION = 332,
     REAL = 333,
     IMAG = 334,
     LABEL = 335,
     COMPLEX = 336,
     IMAGINARY = 337,
     TYPEOF = 338,
     RESTRICT = 339,
     ATTRIBUTE = 340,
     THREAD = 341,
     MAX_OPERATOR = 342,
     MIN_OPERATOR = 343,
     MAX_OPERATOR_ASSIGN = 344,
     MIN_OPERATOR_ASSIGN = 345,
     SUBPARSE_EXPRESSION = 346,
     SUBPARSE_STATEMENT = 347,
     SUBPARSE_DECLARATION = 348,
     SUBPARSE_TYPE = 349,
     OMP_ATOMIC = 350,
     OMP_BARRIER = 351,
     OMP_COPYIN = 352,
     OMP_COPYPRIVATE = 353,
     OMP_CRITICAL = 354,
     OMP_DEFAULT = 355,
     OMP_DEFAULT_CUSTOM = 356,
     OMP_DYNAMIC = 357,
     OMP_FIRSTPRIVATE = 358,
     OMP_FLUSH = 359,
     OMP_FOR = 360,
     OMP_GUIDED = 361,
     OMP_IF = 362,
     OMP_LASTPRIVATE = 363,
     OMP_MASTER = 364,
     OMP_NEWLINE = 365,
     OMP_NONE = 366,
     OMP_NOWAIT = 367,
     OMP_NUM_THREADS = 368,
     OMP_ORDERED = 369,
     OMP_PARALLEL = 370,
     OMP_PARALLEL_FOR = 371,
     OMP_PARALLEL_SECTIONS = 372,
     OMP_PARALLEL_SINGLE = 373,
     OMP_PRAGMA = 374,
     OMP_PRIVATE = 375,
     OMP_REDUCTION = 376,
     OMP_RUNTIME = 377,
     OMP_SCHEDULE = 378,
     OMP_SCHEDULE_CUSTOM = 379,
     OMP_SECTION = 380,
     OMP_SECTIONS = 381,
     OMP_SHARED = 382,
     OMP_SINGLE = 383,
     OMP_STATIC = 384,
     OMP_THREADPRIVATE = 385,
     OMP_CUSTOM_CLAUSE = 386,
     OMP_CUSTOM_DIRECTIVE = 387,
     OMP_CUSTOM_CONSTRUCT = 388,
     PRAGMA_CUSTOM = 389,
     PRAGMA_CUSTOM_NEWLINE = 390,
     PRAGMA_CUSTOM_DIRECTIVE = 391,
     PRAGMA_CUSTOM_CONSTRUCT = 392,
     PRAGMA_CUSTOM_CLAUSE = 393,
     PRAGMA_CLAUSE_ARG_TEXT = 394,
     CONSTRUCT = 395,
     SUBPARSE_SUPERSCALAR_DECLARATOR = 396
   };
#endif


/* Copy the first part of user declarations.  */
#line 21 "c99.y"

/*
   Parser of ISO/IEC 9899:1999 - C

   It parses a superset of the language.

   Must be compiled with rofi-bison-2.1. 
   Ask for it at <rferrer@ac.upc.edu>
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "cxx-lexer.h"
#include "cxx-ast.h"
#include "cxx-utils.h"

#define YYDEBUG 1
#define YYERROR_VERBOSE 1
// Sometimes we need lots of memory
#define YYMAXDEPTH (10000000)

void yyerror(AST* parsed_tree, const char* c);

extern int yylex(void);



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE 
#line 51 "c99.y"
{
	token_atrib_t token_atrib;
	AST ast;
	node_t node_type;
    char *text;
}
/* Line 2604 of glr.c.  */
#line 225 "c99-parser.h"
	YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{

  char yydummy;

} YYLTYPE;
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE mc99lval;




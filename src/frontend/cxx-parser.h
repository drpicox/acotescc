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
     CATCH = 267,
     CHAR = 268,
     CHARACTER_LITERAL = 269,
     CLASS = 270,
     CONST = 271,
     CONST_CAST = 272,
     CONTINUE = 273,
     DECIMAL_LITERAL = 274,
     DEFAULT = 275,
     DELETE = 276,
     DIV_ASSIGN = 277,
     DO = 278,
     TWO_COLONS = 279,
     DOUBLE = 280,
     DYNAMIC_CAST = 281,
     ELSE = 282,
     ENUM = 283,
     EQUAL = 284,
     EXPLICIT = 285,
     EXPORT = 286,
     EXTERN = 287,
     FLOAT = 288,
     FLOATING_LITERAL = 289,
     HEXADECIMAL_FLOAT = 290,
     FOR = 291,
     FRIEND = 292,
     GOTO = 293,
     GREATER_OR_EQUAL = 294,
     HEXADECIMAL_LITERAL = 295,
     IDENTIFIER = 296,
     IF = 297,
     INLINE = 298,
     INT = 299,
     LEFT = 300,
     LEFT_ASSIGN = 301,
     LESS_OR_EQUAL = 302,
     LONG = 303,
     MINUSMINUS = 304,
     MOD_ASSIGN = 305,
     MUL_ASSIGN = 306,
     MUTABLE = 307,
     NAMESPACE = 308,
     TOKEN_NEW = 309,
     NOT_EQUAL = 310,
     OCTAL_LITERAL = 311,
     OPERATOR = 312,
     OR_ASSIGN = 313,
     OROR = 314,
     PLUSPLUS = 315,
     PRIVATE = 316,
     PROTECTED = 317,
     PTR_OP = 318,
     PTR_OP_MUL = 319,
     PUBLIC = 320,
     REGISTER = 321,
     REINTERPRET_CAST = 322,
     RETURN = 323,
     RIGHT = 324,
     RIGHT_ASSIGN = 325,
     SHORT = 326,
     SIGNED = 327,
     SIZEOF = 328,
     STATIC = 329,
     STATIC_CAST = 330,
     STRING_LITERAL = 331,
     STRUCT = 332,
     SUB_ASSIGN = 333,
     SWITCH = 334,
     TEMPLATE = 335,
     THIS = 336,
     THROW = 337,
     ELLIPSIS = 338,
     TRY = 339,
     TYPEDEF = 340,
     TYPEID = 341,
     TYPENAME = 342,
     UNION = 343,
     UNSIGNED = 344,
     USING = 345,
     VIRTUAL = 346,
     VOID = 347,
     VOLATILE = 348,
     WCHAR_T = 349,
     WHILE = 350,
     XOR_ASSIGN = 351,
     UNKNOWN_PRAGMA = 352,
     PP_COMMENT = 353,
     PP_TOKEN = 354,
     BUILTIN_VA_ARG = 355,
     BUILTIN_OFFSETOF = 356,
     ALIGNOF = 357,
     EXTENSION = 358,
     REAL = 359,
     IMAG = 360,
     LABEL = 361,
     COMPLEX = 362,
     TYPEOF = 363,
     RESTRICT = 364,
     ATTRIBUTE = 365,
     THREAD = 366,
     MAX_OPERATOR = 367,
     MIN_OPERATOR = 368,
     MAX_OPERATOR_ASSIGN = 369,
     MIN_OPERATOR_ASSIGN = 370,
     SUBPARSE_EXPRESSION = 371,
     SUBPARSE_STATEMENT = 372,
     SUBPARSE_DECLARATION = 373,
     SUBPARSE_MEMBER = 374,
     SUBPARSE_TYPE = 375,
     OMP_ATOMIC = 376,
     OMP_BARRIER = 377,
     OMP_COPYIN = 378,
     OMP_COPYPRIVATE = 379,
     OMP_CRITICAL = 380,
     OMP_DEFAULT = 381,
     OMP_DEFAULT_CUSTOM = 382,
     OMP_DYNAMIC = 383,
     OMP_FIRSTPRIVATE = 384,
     OMP_FLUSH = 385,
     OMP_FOR = 386,
     OMP_GUIDED = 387,
     OMP_IF = 388,
     OMP_LASTPRIVATE = 389,
     OMP_MASTER = 390,
     OMP_NEWLINE = 391,
     OMP_NONE = 392,
     OMP_NOWAIT = 393,
     OMP_NUM_THREADS = 394,
     OMP_ORDERED = 395,
     OMP_PARALLEL = 396,
     OMP_PARALLEL_FOR = 397,
     OMP_PARALLEL_SECTIONS = 398,
     OMP_PARALLEL_SINGLE = 399,
     OMP_PRAGMA = 400,
     OMP_PRIVATE = 401,
     OMP_REDUCTION = 402,
     OMP_RUNTIME = 403,
     OMP_SCHEDULE = 404,
     OMP_SCHEDULE_CUSTOM = 405,
     OMP_SECTION = 406,
     OMP_SECTIONS = 407,
     OMP_SHARED = 408,
     OMP_SINGLE = 409,
     OMP_STATIC = 410,
     OMP_THREADPRIVATE = 411,
     OMP_CUSTOM_CLAUSE = 412,
     OMP_CUSTOM_DIRECTIVE = 413,
     OMP_CUSTOM_CONSTRUCT = 414,
     PRAGMA_CUSTOM = 415,
     PRAGMA_CUSTOM_NEWLINE = 416,
     PRAGMA_CUSTOM_DIRECTIVE = 417,
     PRAGMA_CUSTOM_CONSTRUCT = 418,
     PRAGMA_CUSTOM_CLAUSE = 419,
     PRAGMA_CLAUSE_ARG_TEXT = 420,
     CONSTRUCT = 421,
     SUBPARSE_SUPERSCALAR_DECLARATOR = 422
   };
#endif


/* Copy the first part of user declarations.  */
#line 21 "cxx03.y"

/*
   Parser of ISO/IEC 14882:2003 - C++

   It parses a superset of the language.

   Must be compiled with rofi-bison-2.3
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

// #define yylex mcxxlex
// #define yytext mcxxtext
extern int yylex(void);



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE 
#line 53 "cxx03.y"
{
	token_atrib_t token_atrib;
	AST ast;
	node_t node_type;
    char *text;
}
/* Line 2604 of glr.c.  */
#line 253 "cxx-parser.h"
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


extern YYSTYPE mcxxlval;




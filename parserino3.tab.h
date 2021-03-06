/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSERINO3_TAB_H_INCLUDED
# define YY_YY_PARSERINO3_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_ELSE = 258,
    T_WHILE = 259,
    T_RETURN = 260,
    T_IF = 261,
    T_ANY = 262,
    T_SELF = 263,
    T_AS = 264,
    T_LAMBDA = 265,
    T_ELIF = 266,
    T_DICT = 267,
    T_OROP = 268,
    T_ANDOP = 269,
    T_EQUOP = 270,
    T_RELOP = 271,
    T_DEF = 272,
    T_INIT = 273,
    T_CLASS = 274,
    T_COLON = 275,
    T_FOR = 276,
    T_RANGE = 277,
    T_IN = 278,
    T_BOOL = 279,
    T_PRINT = 280,
    T_NOTOP = 281,
    T_DOT = 282,
    T_METH = 283,
    T_ID = 284,
    T_STRING = 285,
    T_FROM = 286,
    T_CONTINUE = 287,
    T_BREAK = 288,
    T_DEFAULT = 289,
    T_LEN = 290,
    T_NEW = 291,
    T_MAIN = 292,
    T_SIZEOP = 293,
    T_ERROR = 294,
    T_IMPORT = 295,
    T_LINE = 296,
    T_TAB = 297,
    T_EQ = 298,
    T_OR = 299,
    T_AND = 300,
    T_NOT = 301,
    T_START = 302,
    T_LIST = 303,
    T_COMMNT = 304,
    T_LPAREN = 305,
    T_RPAREN = 306,
    T_SEMI = 307,
    T_COMMA = 308,
    T_LBRACK = 309,
    T_RBRACK = 310,
    T_REFER = 311,
    T_LBRACE = 312,
    T_RBRACE = 313,
    T_FLOAT = 314,
    T_INT = 315,
    T_ADD = 316,
    T_SUB = 317,
    T_MUL = 318,
    T_DIV = 319,
    T_ASSIGN = 320
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "parserino3.y"

	char *strval;
	int intval;
	float flval;

#line 129 "parserino3.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSERINO3_TAB_H_INCLUDED  */

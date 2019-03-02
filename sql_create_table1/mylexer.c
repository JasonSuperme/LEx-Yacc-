/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 7 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.c
* C source file generated from mylexer.l.
* 
* Date: 07/01/18
* Time: 18:03:52
* 
* ALex Version: 2.07
****************************************************************************/

#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#line 1 ".\\mylexer.l"


#include<string.h>
#include<stdlib.h>
#include "myparser.h"

#line 47 "mylexer.c"
/* repeated because of possible precompiled header */
#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#include ".\mylexer.h"

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/* yytext */
static char YYNEAR yysatext[(YYTEXT_SIZE) + 1];		/* extra char for \0 */
char YYFAR *YYNEAR YYDCDECL yystext = yysatext;
char YYFAR *YYNEAR YYDCDECL yytext = yysatext;
int YYNEAR YYDCDECL yystext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_max = (YYTEXT_MAX);

/* yystatebuf */
#if (YYTEXT_SIZE) != 0
static int YYNEAR yysastatebuf[(YYTEXT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysstatebuf = yysastatebuf;
int YYFAR *YYNEAR YYDCDECL yystatebuf = yysastatebuf;
#else
int YYFAR *YYNEAR YYDCDECL yysstatebuf = NULL;
int YYFAR *YYNEAR YYDCDECL yystatebuf = NULL;
#endif

/* yyunputbuf */
#if (YYUNPUT_SIZE) != 0
static int YYNEAR yysaunputbuf[(YYUNPUT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = yysaunputbuf;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = yysaunputbuf;
#else
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = NULL;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = NULL;
#endif
int YYNEAR YYDCDECL yysunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_max = (YYUNPUT_MAX);

/* backwards compatability with lex */
#ifdef input
#ifdef YYPROTOTYPE
int YYCDECL yyinput(void)
#else
int YYCDECL yyinput()
#endif
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
#ifdef YYPROTOTYPE
void YYCDECL yyoutput(int ch)
#else
void YYCDECL yyoutput(ch)
int ch;
#endif
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
#ifdef YYPROTOTYPE
void YYCDECL yyunput(int ch)
#else
void YYCDECL yyunput(ch)
int ch;
#endif
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		/* <warning: unreachable code> off */
#endif
#endif

#ifdef YYPROTOTYPE
int YYCDECL yylexeraction(int action)
#else
int YYCDECL yylexeraction(action)
int action;
#endif
{
	yyreturnflg = YYTRUE;
	switch (action) {
	case 1:
		{
#line 12 ".\\mylexer.l"
return CREATE;
#line 168 "mylexer.c"
		}
		break;
	case 2:
		{
#line 13 ".\\mylexer.l"
return DATABASE;
#line 175 "mylexer.c"
		}
		break;
	case 3:
		{
#line 14 ".\\mylexer.l"
return USE;
#line 182 "mylexer.c"
		}
		break;
	case 4:
		{
#line 15 ".\\mylexer.l"
return TABLE;
#line 189 "mylexer.c"
		}
		break;
	case 5:
		{
#line 16 ".\\mylexer.l"
return INSERT;
#line 196 "mylexer.c"
		}
		break;
	case 6:
		{
#line 17 ".\\mylexer.l"
return INTO;
#line 203 "mylexer.c"
		}
		break;
	case 7:
		{
#line 18 ".\\mylexer.l"

					yylval.yych=(char *)malloc(yyleng+1);
					strcpy(yylval.yych,yytext);
					return ZIFU;
				
#line 214 "mylexer.c"
		}
		break;
	case 8:
		{
#line 23 ".\\mylexer.l"

					yylval.nvalue=atoi(yytext);
					return NUMBER;
				
#line 224 "mylexer.c"
		}
		break;
	case 9:
		{
#line 27 ".\\mylexer.l"
return '(';
#line 231 "mylexer.c"
		}
		break;
	case 10:
		{
#line 28 ".\\mylexer.l"
return ')';
#line 238 "mylexer.c"
		}
		break;
	case 11:
		{
#line 29 ".\\mylexer.l"
return ',';
#line 245 "mylexer.c"
		}
		break;
	case 12:
		{
#line 30 ".\\mylexer.l"
return ';';
#line 252 "mylexer.c"
		}
		break;
	case 13:
		{
#line 31 ".\\mylexer.l"
return 0;
#line 259 "mylexer.c"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = YYFALSE;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		/* <warning: unreachable code> to the old state */
#endif
#endif
YYCONST yymatch_t YYNEARFAR YYBASED_CODE YYDCDECL yymatch[] = {
	0
};

int YYNEAR YYDCDECL yytransitionmax = 140;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 3, 1 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 22, 17 },
	{ 23, 17 },
	{ 17, 12 },
	{ 18, 13 },
	{ 19, 14 },
	{ 20, 15 },
	{ 21, 16 },
	{ 15, 10 },
	{ 24, 18 },
	{ 25, 19 },
	{ 26, 20 },
	{ 27, 21 },
	{ 28, 22 },
	{ 29, 23 },
	{ 30, 24 },
	{ 31, 26 },
	{ 32, 27 },
	{ 33, 28 },
	{ 34, 30 },
	{ 4, 1 },
	{ 5, 1 },
	{ 35, 31 },
	{ 36, 32 },
	{ 6, 1 },
	{ 37, 33 },
	{ 38, 36 },
	{ 39, 38 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 16, 11 },
	{ 8, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 10, 1 },
	{ 11, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 12, 1 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 13, 1 },
	{ 14, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 },
	{ 9, 39 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ 39, -9, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 13 },
	{ 0, 0, 9 },
	{ 0, 0, 10 },
	{ 0, 0, 11 },
	{ 0, -46, 8 },
	{ 0, 0, 12 },
	{ 39, 0, 7 },
	{ 39, -63, 7 },
	{ 39, -16, 7 },
	{ 39, -64, 7 },
	{ 39, -50, 7 },
	{ 39, -67, 7 },
	{ 39, -52, 7 },
	{ 39, -66, 7 },
	{ 39, -71, 7 },
	{ 39, -46, 7 },
	{ 39, -48, 7 },
	{ 39, -43, 7 },
	{ 39, -42, 7 },
	{ 39, -45, 7 },
	{ 39, -54, 7 },
	{ 39, -50, 7 },
	{ 39, 0, 3 },
	{ 39, -57, 7 },
	{ 39, -38, 7 },
	{ 39, -53, 7 },
	{ 39, 0, 6 },
	{ 39, -39, 7 },
	{ 39, -36, 7 },
	{ 39, -31, 7 },
	{ 39, -48, 7 },
	{ 39, 0, 4 },
	{ 39, 0, 1 },
	{ 39, -46, 7 },
	{ 39, 0, 5 },
	{ 39, -31, 7 },
	{ 0, 17, 2 }
};

YYCONST yybackup_t YYNEARFAR YYBASED_CODE YYDCDECL yybackup[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

#line 34 ".\\mylexer.l"




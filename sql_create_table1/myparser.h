/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 8 of your 30 day trial period.
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
* myparser.h
* C header file generated from myparser.y.
* 
* Date: 07/02/18
* Time: 13:35:30
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yypars.h>

#ifndef YYSTYPE
union tagYYSTYPE {
#line 42 ".\\myparser.y"

	char *yych;
	int nvalue;
	struct CreateTBfield *cTBf;
	struct CreateTB *cTB;
	struct Value *val;
	struct InsertVal *Ins;
	struct Insert *Inser;

#line 45 "myparser.h"
};

#define YYSTYPE union tagYYSTYPE
#endif

extern YYSTYPE YYNEAR yylval;

#define CREATE 257
#define DATABASE 258
#define USE 259
#define TABLE 260
#define INSERT 261
#define INTO 262
#define NUMBER 263
#define ZIFU 264
#endif

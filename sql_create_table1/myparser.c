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
* myparser.c
* C source file generated from myparser.y.
* 
* Date: 07/02/18
* Time: 13:35:30
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#line 1 ".\\myparser.y"

#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<direct.h>
#include "mylexer.h"
struct CreateTBfield{
		char *field;
		char *type;
		int length;
		struct CreateTBfield *next_field;
		struct CreateTBfield *last_field;
		};
struct CreateTB{
		char *table;
		struct CreateTBfield *TBf;
		};
struct Value{
		char *a;
		int b;
		int type;//type 表示1的时候是字符串，type为2的时候表示int
		};
struct InsertVal{
		struct Value *val;
		struct InsertVal* next;
		struct InsertVal* last;
		};
struct Insert{
		char *table;
		struct InsertVal *Ins_concrete;
		};

void CreateDatabase(char *);
void CreateDBFile(char *);
void UseDatabase(char *);
void CreateTBFile(char *);
void WriteInfoTB(struct CreateTB *);
void InsertInfo(struct Insert *);

#line 80 "myparser.c"
/* repeated because of possible precompiled header */
#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#include ".\myparser.h"

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/* (state) stack */
#if (YYSTACK_SIZE) != 0
static yystack_t YYNEAR yystack[(YYSTACK_SIZE)];
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = yystack;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = yystack;
#else
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = NULL;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = NULL;
#endif

/* attribute stack */
#if (YYSTACK_SIZE) != 0
static YYSTYPE YYNEAR yyattributestack[(YYSTACK_SIZE)];
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = yyattributestack;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = yyattributestack;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = (char YYFAR *) yyattributestack;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = (char YYFAR *) yyattributestack;
#endif
#else
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#endif
#endif

int YYNEAR YYDCDECL yysstack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_max = (YYSTACK_MAX);

/* attributes */
YYSTYPE YYNEAR yyval;
YYSTYPE YYNEAR yylval;
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yyvalptr = &yyval;
void YYFAR *YYNEAR YYDCDECL yylvalptr = &yylval;
#else
char YYFAR *YYNEAR YYDCDECL yyvalptr = (char *) &yyval;
char YYFAR *YYNEAR YYDCDECL yylvalptr = (char *) &yylval;
#endif

size_t YYNEAR YYDCDECL yyattribute_size = sizeof(YYSTYPE);

/* yyattribute */
#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static YYSTYPE YYFAR *yyattribute1(int index)
#else
static YYSTYPE YYFAR *yyattribute1(index)
int index;
#endif
{
	YYSTYPE YYFAR *p = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR *) yyattributestackptr)[yytop + (index)])
#endif

#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static void yyinitdebug(YYSTYPE YYFAR **p, int count)
#else
static void yyinitdebug(p, count)
YYSTYPE YYFAR **p;
int count;
#endif
{
	int i;
	yyassert(p != NULL);
	yyassert(count >= 1);

	for (i = 0; i < count; i++) {
		p[i] = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

#ifdef YYPROTOTYPE
void YYCDECL yyparseraction(int action)
#else
void YYCDECL yyparseraction(action)
int action;
#endif
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 63 ".\\myparser.y"

			printf("识别数据库名称%s\n",yyattribute(3 - 3).yych);
			yyval.yych=(char *)malloc(strlen(yyattribute(3 - 3).yych));
			yyval.yych=yyattribute(3 - 3).yych;
			CreateDatabase(yyattribute(3 - 3).yych);
			CreateDBFile(yyattribute(3 - 3).yych);
		
#line 212 "myparser.c"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 72 ".\\myparser.y"

			printf("进入到%s里\n",yyattribute(3 - 3).yych);
			yyval.yych=(char *)malloc(strlen(yyattribute(3 - 3).yych));
			yyval.yych=yyattribute(3 - 3).yych;
			UseDatabase(yyattribute(3 - 3).yych);
		
#line 230 "myparser.c"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 80 ".\\myparser.y"

			printf("最终地址:$5:%p\n",yyattribute(5 - 7).cTBf);
			yyval.cTB=(struct CreateTB *)malloc(sizeof(struct CreateTB));
			yyval.cTB->table=yyattribute(3 - 7).yych;//这里的table是指针，指向下面传上来的
			yyval.cTB->TBf=yyattribute(5 - 7).cTBf;//这里的TBf是结构体指针
			WriteInfoTB(yyval.cTB);
		
#line 249 "myparser.c"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 89 ".\\myparser.y"

			printf("识别了表名:%s\n",yyattribute(1 - 1).yych);
			yyval.yych=(char *)malloc(strlen(yyattribute(1 - 1).yych));
			yyval.yych=yyattribute(1 - 1).yych;
			CreateTBFile(yyattribute(1 - 1).yych);
		
#line 267 "myparser.c"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 97 ".\\myparser.y"

					printf("进入到field_type中，查看%s\n",yyattribute(1 - 1).cTBf->field); 
					yyval.cTBf=(struct CreateTBfield *)malloc(sizeof(struct CreateTBfield));
					printf("$1:%p,$$:%p\n",yyattribute(1 - 1).cTBf,yyval.cTBf);
					yyval.cTBf->field=yyattribute(1 - 1).cTBf->field;
					yyval.cTBf->type=yyattribute(1 - 1).cTBf->type;
					yyval.cTBf->length=yyattribute(1 - 1).cTBf->length;
					yyval.cTBf->last_field=yyval.cTBf;
					yyval.cTBf->next_field=NULL;
					printf("$$->last:%p\n",yyval.cTBf->last_field);
				
#line 290 "myparser.c"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 109 ".\\myparser.y"

					printf("进入到fieldsdefin 和 field_type中，查看$1%s $3%s\n",yyattribute(1 - 3).cTBf->field,yyattribute(3 - 3).cTBf->field);
					yyval.cTBf=(struct CreateTBfield *)malloc(sizeof(struct CreateTBfield));
					printf("$$的地址:%p,$1的地址:%p",yyval.cTBf,yyattribute(1 - 3).cTBf);
					yyval.cTBf->next_field=NULL;
					yyval.cTBf->field=yyattribute(3 - 3).cTBf->field;
					yyval.cTBf->type=yyattribute(3 - 3).cTBf->type;
					yyval.cTBf->length=yyattribute(3 - 3).cTBf->length;
					yyattribute(1 - 3).cTBf->last_field->next_field=yyval.cTBf;
					yyattribute(1 - 3).cTBf->last_field=yyval.cTBf;
					printf("将$$传给$1,$1->last_field:%p,$1->next_field%p\n",yyattribute(1 - 3).cTBf->last_field,yyattribute(1 - 3).cTBf->next_field);
					yyval.cTBf=yyattribute(1 - 3).cTBf;
				
#line 315 "myparser.c"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 124 ".\\myparser.y"

				printf("归约field:%s和type%s (%d)",yyattribute(1 - 2).yych,yyattribute(2 - 2).cTBf->type,yyattribute(2 - 2).cTBf->length);
				yyval.cTBf=(struct CreateTBfield *)malloc(sizeof(struct CreateTBfield));
				yyval.cTBf->field=yyattribute(1 - 2).yych;
				yyval.cTBf->type=yyattribute(2 - 2).cTBf->type;
				yyval.cTBf->length=yyattribute(2 - 2).cTBf->length;
			
#line 334 "myparser.c"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 133 ".\\myparser.y"

			printf("识别名称%s\n",yyattribute(1 - 1).yych);
			yyval.yych=yyattribute(1 - 1).yych;
		
#line 350 "myparser.c"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 139 ".\\myparser.y"

			printf("识别类型%s(%d)\n",yyattribute(1 - 4).yych,yyattribute(3 - 4).nvalue);
			yyval.cTBf=(struct CreateTBfield *)malloc(sizeof(struct CreateTBfield));
			yyval.cTBf->type=yyattribute(1 - 4).yych;
			yyval.cTBf->length=yyattribute(3 - 4).nvalue;
		
#line 368 "myparser.c"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 146 ".\\myparser.y"

			printf("识别类型%s\n",yyattribute(1 - 1).yych);
			yyval.cTBf=(struct CreateTBfield *)malloc(sizeof(struct CreateTBfield));
			yyval.cTBf->type=yyattribute(1 - 1).yych;
			yyval.cTBf->length=sizeof(int);
		
#line 386 "myparser.c"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 154 ".\\myparser.y"

			yyval.Inser=(struct Insert*)malloc(sizeof(struct Insert));
			yyval.Inser->table=yyattribute(3 - 7).yych;
			yyval.Inser->Ins_concrete=yyattribute(5 - 7).Ins;
			printf("最终$$地址%p\n",yyattribute(5 - 7).Ins);
			InsertInfo(yyval.Inser);
		
#line 405 "myparser.c"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 163 ".\\myparser.y"

			printf("识别表名%s\n",yyattribute(1 - 1).yych);
			yyval.yych=yyattribute(1 - 1).yych;
		
#line 421 "myparser.c"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 169 ".\\myparser.y"

					yyval.Ins=(struct InsertVal *)malloc(sizeof(struct InsertVal));
					yyval.Ins->val=yyattribute(3 - 3).val;
					printf("$$的地址%p,$1的地址%p",yyval.Ins,yyattribute(1 - 3).Ins);
					yyval.Ins->next=NULL;
					yyval.Ins->last=yyval.Ins;
					yyattribute(1 - 3).Ins->last->next=yyval.Ins;
					printf("$1->last:%p  $1->last->next:%p\n",yyattribute(1 - 3).Ins->last,yyattribute(1 - 3).Ins->last->next);
					yyattribute(1 - 3).Ins->last=yyval.Ins;
					printf("\n$1->last:%p,$1->last->next:%p\n",yyattribute(1 - 3).Ins->last,yyattribute(1 - 3).Ins->last->next);
					yyval.Ins=yyattribute(1 - 3).Ins;
				
#line 445 "myparser.c"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 182 ".\\myparser.y"

					yyval.Ins=(struct InsertVal *)malloc(sizeof(struct InsertVal));
					printf("第一次申请的地址%p",yyval.Ins);
					yyval.Ins->val=yyattribute(1 - 1).val;
					yyval.Ins->next=NULL;
					yyval.Ins->last=yyval.Ins;
					printf("$$->last:%p\n",yyval.Ins->last);
				
#line 465 "myparser.c"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 193 ".\\myparser.y"

			printf("属性的值%s\n",yyattribute(1 - 1).yych);
			yyval.val=(struct Value *)malloc(sizeof(struct Value));
			yyval.val->a=yyattribute(1 - 1).yych;
			yyval.val->type=1;
		
#line 483 "myparser.c"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 200 ".\\myparser.y"

			printf("属性的值%d\n",yyattribute(1 - 1).nvalue);
			yyval.val=(struct Value *)malloc(sizeof(struct Value));
			yyval.val->b=yyattribute(1 - 1).nvalue;
			yyval.val->type=2;
		
#line 501 "myparser.c"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}
#ifdef YYDEBUG
YYCONST yysymbol_t YYNEARFAR YYBASED_CODE YYDCDECL yysymbol[] = {
	{ "$end", 0 },
	{ "\'(\'", 40 },
	{ "\')\'", 41 },
	{ "\',\'", 44 },
	{ "\';\'", 59 },
	{ "error", 256 },
	{ "CREATE", 257 },
	{ "DATABASE", 258 },
	{ "USE", 259 },
	{ "TABLE", 260 },
	{ "INSERT", 261 },
	{ "INTO", 262 },
	{ "NUMBER", 263 },
	{ "ZIFU", 264 },
	{ NULL, 0 }
};

YYCONST char *YYCONST YYNEARFAR YYBASED_CODE YYDCDECL yyrule[] = {
	"$accept: statement",
	"statement: createdb",
	"statement: usedb",
	"statement: createTB",
	"statement: insertVal",
	"createdb: CREATE DATABASE ZIFU",
	"usedb: USE DATABASE ZIFU",
	"createTB: CREATE TABLE table \'(\' fieldsdefinition \')\' \';\'",
	"table: ZIFU",
	"fieldsdefinition: field_type",
	"fieldsdefinition: fieldsdefinition \',\' field_type",
	"field_type: field type",
	"field: ZIFU",
	"type: ZIFU \'(\' NUMBER \')\'",
	"type: ZIFU",
	"insertVal: INSERT INTO itable \'(\' valdefinition \')\' \';\'",
	"itable: ZIFU",
	"valdefinition: valdefinition \',\' value",
	"valdefinition: value",
	"value: ZIFU",
	"value: NUMBER"
};
#endif

YYCONST yyreduction_t YYNEARFAR YYBASED_CODE YYDCDECL yyreduction[] = {
	{ 0, 1, -1 },
	{ 1, 1, -1 },
	{ 1, 1, -1 },
	{ 1, 1, -1 },
	{ 1, 1, -1 },
	{ 2, 3, 0 },
	{ 3, 3, 1 },
	{ 4, 7, 2 },
	{ 5, 1, 3 },
	{ 6, 1, 4 },
	{ 6, 3, 5 },
	{ 7, 2, 6 },
	{ 8, 1, 7 },
	{ 9, 4, 8 },
	{ 9, 1, 9 },
	{ 10, 7, 10 },
	{ 11, 1, 11 },
	{ 12, 3, 12 },
	{ 12, 1, 13 },
	{ 13, 1, 14 },
	{ 13, 1, 15 }
};

int YYNEAR YYDCDECL yytokenaction_size = 27;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 0, YYAT_SHIFT, 1 },
	{ 40, YYAT_SHIFT, 41 },
	{ 0, YYAT_SHIFT, 2 },
	{ 28, YYAT_SHIFT, 33 },
	{ 0, YYAT_SHIFT, 3 },
	{ 24, YYAT_SHIFT, 31 },
	{ 28, YYAT_SHIFT, 34 },
	{ 1, YYAT_SHIFT, 9 },
	{ 24, YYAT_SHIFT, 32 },
	{ 1, YYAT_SHIFT, 10 },
	{ 34, YYAT_SHIFT, 25 },
	{ 34, YYAT_SHIFT, 26 },
	{ 35, YYAT_SHIFT, 40 },
	{ 33, YYAT_SHIFT, 38 },
	{ 32, YYAT_SHIFT, 21 },
	{ 31, YYAT_SHIFT, 36 },
	{ 29, YYAT_SHIFT, 35 },
	{ 23, YYAT_SHIFT, 29 },
	{ 18, YYAT_SHIFT, 20 },
	{ 15, YYAT_SHIFT, 19 },
	{ 12, YYAT_SHIFT, 17 },
	{ 11, YYAT_SHIFT, 16 },
	{ 10, YYAT_SHIFT, 14 },
	{ 9, YYAT_SHIFT, 13 },
	{ 6, YYAT_ACCEPT, 0 },
	{ 3, YYAT_SHIFT, 12 },
	{ 2, YYAT_SHIFT, 11 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ -257, 1, YYAT_ERROR, 0 },
	{ -251, 1, YYAT_ERROR, 0 },
	{ -232, 1, YYAT_ERROR, 0 },
	{ -237, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 1 },
	{ 0, 0, YYAT_REDUCE, 2 },
	{ 24, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 4 },
	{ 0, 0, YYAT_REDUCE, 3 },
	{ -241, 1, YYAT_ERROR, 0 },
	{ -242, 1, YYAT_ERROR, 0 },
	{ -243, 1, YYAT_ERROR, 0 },
	{ -244, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 5 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ -21, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 6 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ -22, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 32 },
	{ 0, 0, YYAT_DEFAULT, 34 },
	{ 0, 0, YYAT_REDUCE, 12 },
	{ 0, 0, YYAT_REDUCE, 9 },
	{ -247, 1, YYAT_ERROR, 0 },
	{ -36, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 20 },
	{ 0, 0, YYAT_REDUCE, 19 },
	{ 0, 0, YYAT_REDUCE, 18 },
	{ -38, 1, YYAT_ERROR, 0 },
	{ -24, 1, YYAT_REDUCE, 14 },
	{ 0, 0, YYAT_REDUCE, 11 },
	{ -44, 1, YYAT_ERROR, 0 },
	{ -250, 1, YYAT_ERROR, 0 },
	{ -46, 1, YYAT_ERROR, 0 },
	{ -253, 1, YYAT_ERROR, 0 },
	{ -251, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 7 },
	{ 0, 0, YYAT_REDUCE, 10 },
	{ 0, 0, YYAT_REDUCE, 15 },
	{ 0, 0, YYAT_REDUCE, 17 },
	{ -40, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 13 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 15;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 0, 6 },
	{ 0, 4 },
	{ 0, 5 },
	{ 0, 8 },
	{ 32, 37 },
	{ 32, 23 },
	{ 20, 28 },
	{ 20, 27 },
	{ 34, 39 },
	{ 0, 7 },
	{ 19, 24 },
	{ 19, 22 },
	{ 23, 30 },
	{ 12, 18 },
	{ 10, 15 }
};

YYCONST yystategoto_t YYNEARFAR YYBASED_CODE YYDCDECL yystategoto[] = {
	{ -1, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 9, -1 },
	{ 0, -1 },
	{ 2, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 4, 32 },
	{ -6, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 3, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -3, -1 },
	{ 0, -1 },
	{ -5, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 }
};

YYCONST yydestructor_t YYNEARFAR *YYNEAR YYDCDECL yydestructorptr = NULL;

YYCONST yytokendest_t YYNEARFAR *YYNEAR YYDCDECL yytokendestptr = NULL;
int YYNEAR YYDCDECL yytokendest_size = 0;

YYCONST yytokendestbase_t YYNEARFAR *YYNEAR YYDCDECL yytokendestbaseptr = NULL;
int YYNEAR YYDCDECL yytokendestbase_size = 0;
#line 207 ".\\myparser.y"


int main(void)
{
	int a=0;
	while(a==0)
	a=yyparse();
	return 0;
}

void CreateDatabase(char *a)
{
	FILE *fp;
	char *temp;
	temp=(char *)malloc(strlen(a));
	strcpy(temp,a);
	strcat(temp,"\n");
	fp=fopen("C:\\Users\\Jason\\Desktop\\dbms\\sys.txt","a+");
	if(fp==0){printf("Create database error!\n");}
	else printf("Open the file successfully\n");
	fseek(fp,0,SEEK_END);
	fwrite(temp,strlen(temp),1,fp);
	printf("success write create database!\n");
	fclose(fp);
}

void CreateDBFile(char *a)
{
	char dir[50]="C:\\Users\\Jason\\Desktop\\dbms\\";
	strcat(dir,a);
	printf("%s",dir);
	if(_mkdir(dir)==0)
	printf("Database File created success!\n");
	else
	{
		printf("Database File created failed!\n");
		exit(1);
	}
}

void UseDatabase(char *a)
{
	char path[_MAX_PATH];
	char dir[50]="C:\\Users\\Jason\\Desktop\\dbms\\";
	strcat(dir,a);
	_getcwd(path,_MAX_PATH);
	printf("当前所在目录:%s\n",path);
	if((_chdir(dir))==0)
	{
		printf("进入数据库%s中\n",a);
		_getcwd(path,_MAX_PATH);
		printf("当前工作目录:%s\n",path);
	}
	else
	{
		printf("未能进入数据库%s\n",a);
		exit(1);
	}
}

void CreateTBFile(char *a)
{
	FILE *fp;
	char name[20]="";
	sprintf(name,"%s.txt",a);
	puts(name);
	fp=fopen(name,"w");
	fclose(fp);
}

void WriteInfoTB(struct CreateTB *CTB)
{
	int cnt=1;
	int a=0;
	struct CreateTBfield *temp;
	FILE *fp;
	fp=fopen("sys.txt","a+");
	temp=CTB->TBf;
	printf("temp的地址:%p\n",temp);
	while(temp!=NULL)
	{
		fprintf(fp,"%s %d %s %s %d\n",CTB->table,cnt++,temp->field,temp->type,temp->length);
		temp=temp->next_field;
	}
	fclose(fp);
}

void InsertInfo(struct Insert * Ins)
{
	FILE *fp;
	int a=0;
	struct InsertVal *temp;
	char name[20]="";
	sprintf(name,"%s.txt",Ins->table);
	printf("file name %s\n",name);
	fp=fopen(name,"w");
	if(fp==NULL)
	{
		printf("open file fail!\n");
		exit(0);
	}
	else
	printf("open file success!\n");
	temp=Ins->Ins_concrete;
	while(temp!=NULL)
	{
		if(temp->val->type==1)
		fprintf(fp,"%s ",temp->val->a);
		else
		fprintf(fp,"%d ",temp->val->b);
		temp=temp->next;
		printf("%d ",a++);
	}
	fprintf(fp,"\n");
	fclose(fp);
	printf("write the table success!\n");
}

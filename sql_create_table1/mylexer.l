%{

#include<string.h>
#include<stdlib.h>
#include "myparser.h"
%}

DIGIT [0-9]
ID[A-Za-z][A-Za-z0-9]*

%%
CREATE			{return CREATE;}
DATABASE		{return DATABASE;}
USE				{return USE;}
TABLE			{return TABLE;}
INSERT			{return INSERT;}
INTO			{return INTO;}
{ID}			{
					yylval.yych=(char *)malloc(yyleng+1);
					strcpy(yylval.yych,yytext);
					return ZIFU;
				}
{DIGIT}+		{
					yylval.nvalue=atoi(yytext);
					return NUMBER;
				}
"("				{return '(';}
")"				{return ')';}
","				{return ',';}
";"				{return ';';}
"\n"			{return 0;}


%%


%{
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
		int type;//type ��ʾ1��ʱ�����ַ�����typeΪ2��ʱ���ʾint
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
%}


%union{
	char *yych;
	int nvalue;
	struct CreateTBfield *cTBf;
	struct CreateTB *cTB;
	struct Value *val;
	struct InsertVal *Ins;
	struct Insert *Inser;
}
%term CREATE DATABASE USE TABLE INSERT INTO
%term<nvalue>NUMBER
%term<yych>ZIFU
%nonterm<yych>createdb usedb table field itable
%nonterm<cTB>createTB
%nonterm<cTBf>field_type type fieldsdefinition
%nonterm<Ins>valdefinition
%nonterm<Inser>insertVal
%nonterm<val>value
%%
statement:createdb|usedb|createTB|insertVal;
createdb:CREATE DATABASE ZIFU
		{
			printf("ʶ�����ݿ�����%s\n",$3);
			$$=(char *)malloc(strlen($3));
			$$=$3;
			CreateDatabase($3);
			CreateDBFile($3);
		}
		;
usedb	:USE DATABASE ZIFU
		{
			printf("���뵽%s��\n",$3);
			$$=(char *)malloc(strlen($3));
			$$=$3;
			UseDatabase($3);
		}
		;
createTB:CREATE TABLE table '(' fieldsdefinition ')' ';'
		{
			printf("���յ�ַ:$5:%p\n",$5);
			$$=(struct CreateTB *)malloc(sizeof(struct CreateTB));
			$$->table=$3;//�����table��ָ�룬ָ�����洫������
			$$->TBf=$5;//�����TBf�ǽṹ��ָ��
			WriteInfoTB($$);
		}
		;
table	:ZIFU
		{
			printf("ʶ���˱���:%s\n",$1);
			$$=(char *)malloc(strlen($1));
			$$=$1;
			CreateTBFile($1);
		}
		;
fieldsdefinition:field_type
				{
					printf("���뵽field_type�У��鿴%s\n",$1->field); 
					$$=(struct CreateTBfield *)malloc(sizeof(struct CreateTBfield));
					printf("$1:%p,$$:%p\n",$1,$$);
					$$->field=$1->field;
					$$->type=$1->type;
					$$->length=$1->length;
					$$->last_field=$$;
					$$->next_field=NULL;
					printf("$$->last:%p\n",$$->last_field);
				}
				|fieldsdefinition ',' field_type
				{
					printf("���뵽fieldsdefin �� field_type�У��鿴$1%s $3%s\n",$1->field,$3->field);
					$$=(struct CreateTBfield *)malloc(sizeof(struct CreateTBfield));
					printf("$$�ĵ�ַ:%p,$1�ĵ�ַ:%p",$$,$1);
					$$->next_field=NULL;
					$$->field=$3->field;
					$$->type=$3->type;
					$$->length=$3->length;
					$1->last_field->next_field=$$;
					$1->last_field=$$;
					printf("��$$����$1,$1->last_field:%p,$1->next_field%p\n",$1->last_field,$1->next_field);
					$$=$1;
				}
				;
field_type:field type
			{
				printf("��Լfield:%s��type%s (%d)",$1,$2->type,$2->length);
				$$=(struct CreateTBfield *)malloc(sizeof(struct CreateTBfield));
				$$->field=$1;
				$$->type=$2->type;
				$$->length=$2->length;
			}
			;
field	:ZIFU
		{
			printf("ʶ������%s\n",$1);
			$$=$1;
		}
		;
type	:ZIFU '(' NUMBER ')'
		{
			printf("ʶ������%s(%d)\n",$1,$3);
			$$=(struct CreateTBfield *)malloc(sizeof(struct CreateTBfield));
			$$->type=$1;
			$$->length=$3;
		}
		|ZIFU
		{
			printf("ʶ������%s\n",$1);
			$$=(struct CreateTBfield *)malloc(sizeof(struct CreateTBfield));
			$$->type=$1;
			$$->length=sizeof(int);
		}
		;
insertVal:INSERT INTO itable '(' valdefinition ')' ';'
		{
			$$=(struct Insert*)malloc(sizeof(struct Insert));
			$$->table=$3;
			$$->Ins_concrete=$5;
			printf("����$$��ַ%p\n",$5);
			InsertInfo($$);
		}
		;
itable	:ZIFU
		{
			printf("ʶ�����%s\n",$1);
			$$=$1;
		}
		;
valdefinition	:valdefinition ',' value
				{
					$$=(struct InsertVal *)malloc(sizeof(struct InsertVal));
					$$->val=$3;
					printf("$$�ĵ�ַ%p,$1�ĵ�ַ%p",$$,$1);
					$$->next=NULL;
					$$->last=$$;
					$1->last->next=$$;
					printf("$1->last:%p  $1->last->next:%p\n",$1->last,$1->last->next);
					$1->last=$$;
					printf("\n$1->last:%p,$1->last->next:%p\n",$1->last,$1->last->next);
					$$=$1;
				}
				|value
				{
					$$=(struct InsertVal *)malloc(sizeof(struct InsertVal));
					printf("��һ������ĵ�ַ%p",$$);
					$$->val=$1;
					$$->next=NULL;
					$$->last=$$;
					printf("$$->last:%p\n",$$->last);
				}
				;

value	:ZIFU
		{
			printf("���Ե�ֵ%s\n",$1);
			$$=(struct Value *)malloc(sizeof(struct Value));
			$$->a=$1;
			$$->type=1;
		}
		|NUMBER
		{
			printf("���Ե�ֵ%d\n",$1);
			$$=(struct Value *)malloc(sizeof(struct Value));
			$$->b=$1;
			$$->type=2;
		}
		;
%%

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
	printf("��ǰ����Ŀ¼:%s\n",path);
	if((_chdir(dir))==0)
	{
		printf("�������ݿ�%s��\n",a);
		_getcwd(path,_MAX_PATH);
		printf("��ǰ����Ŀ¼:%s\n",path);
	}
	else
	{
		printf("δ�ܽ������ݿ�%s\n",a);
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
	printf("temp�ĵ�ַ:%p\n",temp);
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
#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 8 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 07/02/18
# Time: 13:35:30
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : statement $end

    1  statement : createdb
    2            | usedb
    3            | createTB
    4            | insertVal

    5  createdb : CREATE DATABASE ZIFU

    6  usedb : USE DATABASE ZIFU

    7  createTB : CREATE TABLE table '(' fieldsdefinition ')' ';'

    8  table : ZIFU

    9  fieldsdefinition : field_type
   10                   | fieldsdefinition ',' field_type

   11  field_type : field type

   12  field : ZIFU

   13  type : ZIFU '(' NUMBER ')'
   14       | ZIFU

   15  insertVal : INSERT INTO itable '(' valdefinition ')' ';'

   16  itable : ZIFU

   17  valdefinition : valdefinition ',' value
   18                | value

   19  value : ZIFU
   20        | NUMBER


##############################################################################
# States
##############################################################################

state 0
	$accept : . statement $end

	CREATE  shift 1
	USE  shift 2
	INSERT  shift 3

	createdb  goto 4
	usedb  goto 5
	statement  goto 6
	insertVal  goto 7
	createTB  goto 8


state 1
	createdb : CREATE . DATABASE ZIFU
	createTB : CREATE . TABLE table '(' fieldsdefinition ')' ';'

	DATABASE  shift 9
	TABLE  shift 10


state 2
	usedb : USE . DATABASE ZIFU

	DATABASE  shift 11


state 3
	insertVal : INSERT . INTO itable '(' valdefinition ')' ';'

	INTO  shift 12


state 4
	statement : createdb .  (1)

	.  reduce 1


state 5
	statement : usedb .  (2)

	.  reduce 2


state 6
	$accept : statement . $end  (0)

	$end  accept


state 7
	statement : insertVal .  (4)

	.  reduce 4


state 8
	statement : createTB .  (3)

	.  reduce 3


state 9
	createdb : CREATE DATABASE . ZIFU

	ZIFU  shift 13


state 10
	createTB : CREATE TABLE . table '(' fieldsdefinition ')' ';'

	ZIFU  shift 14

	table  goto 15


state 11
	usedb : USE DATABASE . ZIFU

	ZIFU  shift 16


state 12
	insertVal : INSERT INTO . itable '(' valdefinition ')' ';'

	ZIFU  shift 17

	itable  goto 18


state 13
	createdb : CREATE DATABASE ZIFU .  (5)

	.  reduce 5


state 14
	table : ZIFU .  (8)

	.  reduce 8


state 15
	createTB : CREATE TABLE table . '(' fieldsdefinition ')' ';'

	'('  shift 19


state 16
	usedb : USE DATABASE ZIFU .  (6)

	.  reduce 6


state 17
	itable : ZIFU .  (16)

	.  reduce 16


state 18
	insertVal : INSERT INTO itable . '(' valdefinition ')' ';'

	'('  shift 20


state 19
	createTB : CREATE TABLE table '(' . fieldsdefinition ')' ';'

	ZIFU  shift 21

	field_type  goto 22
	field  goto 23
	fieldsdefinition  goto 24


state 20
	insertVal : INSERT INTO itable '(' . valdefinition ')' ';'

	NUMBER  shift 25
	ZIFU  shift 26

	value  goto 27
	valdefinition  goto 28


state 21
	field : ZIFU .  (12)

	.  reduce 12


state 22
	fieldsdefinition : field_type .  (9)

	.  reduce 9


state 23
	field_type : field . type

	ZIFU  shift 29

	type  goto 30


state 24
	createTB : CREATE TABLE table '(' fieldsdefinition . ')' ';'
	fieldsdefinition : fieldsdefinition . ',' field_type

	')'  shift 31
	','  shift 32


state 25
	value : NUMBER .  (20)

	.  reduce 20


state 26
	value : ZIFU .  (19)

	.  reduce 19


state 27
	valdefinition : value .  (18)

	.  reduce 18


state 28
	insertVal : INSERT INTO itable '(' valdefinition . ')' ';'
	valdefinition : valdefinition . ',' value

	')'  shift 33
	','  shift 34


state 29
	type : ZIFU . '(' NUMBER ')'
	type : ZIFU .  (14)

	'('  shift 35
	.  reduce 14


state 30
	field_type : field type .  (11)

	.  reduce 11


state 31
	createTB : CREATE TABLE table '(' fieldsdefinition ')' . ';'

	';'  shift 36


state 32
	fieldsdefinition : fieldsdefinition ',' . field_type

	ZIFU  shift 21

	field_type  goto 37
	field  goto 23


state 33
	insertVal : INSERT INTO itable '(' valdefinition ')' . ';'

	';'  shift 38


state 34
	valdefinition : valdefinition ',' . value

	NUMBER  shift 25
	ZIFU  shift 26

	value  goto 39


state 35
	type : ZIFU '(' . NUMBER ')'

	NUMBER  shift 40


state 36
	createTB : CREATE TABLE table '(' fieldsdefinition ')' ';' .  (7)

	.  reduce 7


state 37
	fieldsdefinition : fieldsdefinition ',' field_type .  (10)

	.  reduce 10


state 38
	insertVal : INSERT INTO itable '(' valdefinition ')' ';' .  (15)

	.  reduce 15


state 39
	valdefinition : valdefinition ',' value .  (17)

	.  reduce 17


state 40
	type : ZIFU '(' NUMBER . ')'

	')'  shift 41


state 41
	type : ZIFU '(' NUMBER ')' .  (13)

	.  reduce 13


##############################################################################
# Summary
##############################################################################

14 token(s), 14 nonterminal(s)
21 grammar rule(s), 42 state(s)


##############################################################################
# End of File
##############################################################################

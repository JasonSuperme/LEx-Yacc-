#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 7 of your 30 day trial period.
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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 07/01/18
# Time: 18:03:52
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  CREATE

    2  DATABASE

    3  USE

    4  TABLE

    5  INSERT

    6  INTO

    7  [A-Za-z][A-Za-z0-9]*

    8  [0-9]+

    9  "("

   10  ")"

   11  ","

   12  ";"

   13  "\n"


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x0a               goto 3
	0x28               goto 4
	0x29               goto 5
	0x2c               goto 6
	0x30 - 0x39 (10)   goto 7
	0x3b               goto 8
	0x41 - 0x42 (2)    goto 9
	0x43               goto 10
	0x44               goto 11
	0x45 - 0x48 (4)    goto 9
	0x49               goto 12
	0x4a - 0x53 (10)   goto 9
	0x54               goto 13
	0x55               goto 14
	0x56 - 0x5a (5)    goto 9
	0x61 - 0x7a (26)   goto 9


state 2
	^INITIAL

	0x0a               goto 3
	0x28               goto 4
	0x29               goto 5
	0x2c               goto 6
	0x30 - 0x39 (10)   goto 7
	0x3b               goto 8
	0x41 - 0x42 (2)    goto 9
	0x43               goto 10
	0x44               goto 11
	0x45 - 0x48 (4)    goto 9
	0x49               goto 12
	0x4a - 0x53 (10)   goto 9
	0x54               goto 13
	0x55               goto 14
	0x56 - 0x5a (5)    goto 9
	0x61 - 0x7a (26)   goto 9


state 3
	match 13


state 4
	match 9


state 5
	match 10


state 6
	match 11


state 7
	0x30 - 0x39 (10)   goto 7

	match 8


state 8
	match 12


state 9
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x5a (26)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 10
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x51 (17)   goto 9
	0x52               goto 15
	0x53 - 0x5a (8)    goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 11
	0x30 - 0x39 (10)   goto 9
	0x41               goto 16
	0x42 - 0x5a (25)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 12
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x4d (13)   goto 9
	0x4e               goto 17
	0x4f - 0x5a (12)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 13
	0x30 - 0x39 (10)   goto 9
	0x41               goto 18
	0x42 - 0x5a (25)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 14
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x52 (18)   goto 9
	0x53               goto 19
	0x54 - 0x5a (7)    goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 15
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x44 (4)    goto 9
	0x45               goto 20
	0x46 - 0x5a (21)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 16
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x53 (19)   goto 9
	0x54               goto 21
	0x55 - 0x5a (6)    goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 17
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x52 (18)   goto 9
	0x53               goto 22
	0x54               goto 23
	0x55 - 0x5a (6)    goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 18
	0x30 - 0x39 (10)   goto 9
	0x41               goto 9
	0x42               goto 24
	0x43 - 0x5a (24)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 19
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x44 (4)    goto 9
	0x45               goto 25
	0x46 - 0x5a (21)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 20
	0x30 - 0x39 (10)   goto 9
	0x41               goto 26
	0x42 - 0x5a (25)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 21
	0x30 - 0x39 (10)   goto 9
	0x41               goto 27
	0x42 - 0x5a (25)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 22
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x44 (4)    goto 9
	0x45               goto 28
	0x46 - 0x5a (21)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 23
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x4e (14)   goto 9
	0x4f               goto 29
	0x50 - 0x5a (11)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 24
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x4b (11)   goto 9
	0x4c               goto 30
	0x4d - 0x5a (14)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 25
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x5a (26)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 3


state 26
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x53 (19)   goto 9
	0x54               goto 31
	0x55 - 0x5a (6)    goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 27
	0x30 - 0x39 (10)   goto 9
	0x41               goto 9
	0x42               goto 32
	0x43 - 0x5a (24)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 28
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x51 (17)   goto 9
	0x52               goto 33
	0x53 - 0x5a (8)    goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 29
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x5a (26)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 6


state 30
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x44 (4)    goto 9
	0x45               goto 34
	0x46 - 0x5a (21)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 31
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x44 (4)    goto 9
	0x45               goto 35
	0x46 - 0x5a (21)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 32
	0x30 - 0x39 (10)   goto 9
	0x41               goto 36
	0x42 - 0x5a (25)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 33
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x53 (19)   goto 9
	0x54               goto 37
	0x55 - 0x5a (6)    goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 34
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x5a (26)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 4


state 35
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x5a (26)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 1


state 36
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x52 (18)   goto 9
	0x53               goto 38
	0x54 - 0x5a (7)    goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 37
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x5a (26)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 5


state 38
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x44 (4)    goto 9
	0x45               goto 39
	0x46 - 0x5a (21)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 7


state 39
	0x30 - 0x39 (10)   goto 9
	0x41 - 0x5a (26)   goto 9
	0x61 - 0x7a (26)   goto 9

	match 2


#############################################################################
# Summary
#############################################################################

1 start state(s)
13 expression(s), 39 state(s)


#############################################################################
# End of File
#############################################################################

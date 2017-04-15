/*
* =====================================================================================
*
*       Filename:  Poker.c
*
*    Description:  This file includes function definitions for the program.
*
*        Version:  1.0
*        Created:  12/3/2016 10:28:25 PM
*       Revision:  none
*       Compiler:  msft c
*
*         Author:  Edgar Perez
*   Organization:  Washington State University
*
* =====================================================================================
*/

#include	"Header.h"

/*************************************************************
* Function: stringCopy()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Copies the contents of a string to a
*			   char destination array.
* Input parameters: Char Array and String.
* Returns: Void
* Preconditions: None.
*************************************************************/
void stringCopy(char *dest, const char *source) {
	for (; *source != 0; source++, dest++)
		*dest = *source;
}

/*************************************************************
* Function: shuffle()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Randomizes a player's hand.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Void
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
void shuffle(struct card *hand[]) {
	for (int i = 0; i < HAND; i++) {
		hand[i]->number = rand() % 13 + 1;
		hand[i]->suit = rand() % 4 + 65;
	}
}

/*************************************************************
* Function: setCard()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Sets a card inside a String Array. ASCII Art
*			   provided by The Bej's cards (TM) v.1.0.
* Input parameters: Integer for card number, suit, and
*					an Array of Strings.
* Returns: Void
* Preconditions: Memory must be allocated for char**.
*************************************************************/
void setCard(int number, int suit, char *hand[]) {
	switch (suit) {
	case 'A':
		switch (number) {
		case 1:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|A        |\t");
			stringCopy(hand[2], "|@   *    |\t");
			stringCopy(hand[3], "|   / \\   |\t");
			stringCopy(hand[4], "|  /_@_\\  |\t");
			stringCopy(hand[5], "|    !    |\t");
			stringCopy(hand[6], "|   ~ ~  @|\t");
			stringCopy(hand[7], "|        V|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 2:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|2        |\t");
			stringCopy(hand[2], "|@        |\t");
			stringCopy(hand[3], "|    @    |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|    @    |\t");
			stringCopy(hand[6], "|        @|\t");
			stringCopy(hand[7], "|        Z|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 3:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|3        |\t");
			stringCopy(hand[2], "|@   @    |\t");
			stringCopy(hand[3], "|         |\t");
			stringCopy(hand[4], "|    @    |\t");
			stringCopy(hand[5], "|         |\t");
			stringCopy(hand[6], "|    @   @|\t");
			stringCopy(hand[7], "|        E|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 4:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|4        |\t");
			stringCopy(hand[2], "|@        |\t");
			stringCopy(hand[3], "|  @   @  |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|  @   @  |\t");
			stringCopy(hand[6], "|        @|\t");
			stringCopy(hand[7], "|        b|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 5:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|5        |\t");
			stringCopy(hand[2], "|@        |\t");
			stringCopy(hand[3], "|  @   @  |\t");
			stringCopy(hand[4], "|    @    |\t");
			stringCopy(hand[5], "|  @   @  |\t");
			stringCopy(hand[6], "|        @|\t");
			stringCopy(hand[7], "|        S|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 6:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|6        |\t");
			stringCopy(hand[2], "|@ @   @  |\t");
			stringCopy(hand[3], "|         |\t");
			stringCopy(hand[4], "|  @   @  |\t");
			stringCopy(hand[5], "|         |\t");
			stringCopy(hand[6], "|  @   @ @|\t");
			stringCopy(hand[7], "|        9|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 7:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|7        |\t");
			stringCopy(hand[2], "|@ @   @  |\t");
			stringCopy(hand[3], "|    @    |\t");
			stringCopy(hand[4], "|  @   @  |\t");
			stringCopy(hand[5], "|         |\t");
			stringCopy(hand[6], "|  @   @ @|\t");
			stringCopy(hand[7], "|        L|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 8:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|8 @   @  |\t");
			stringCopy(hand[2], "|@        |\t");
			stringCopy(hand[3], "|  @   @  |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|  @   @  |\t");
			stringCopy(hand[6], "|        @|\t");
			stringCopy(hand[7], "|  @   @ 8|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 9:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|9 @   @  |\t");
			stringCopy(hand[2], "|@        |\t");
			stringCopy(hand[3], "|  @   @  |\t");
			stringCopy(hand[4], "|    @    |\t");
			stringCopy(hand[5], "|  @   @  |\t");
			stringCopy(hand[6], "|        @|\t");
			stringCopy(hand[7], "|  @   @ 6|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 10:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|10@   @  |\t");
			stringCopy(hand[2], "|@   @    |\t");
			stringCopy(hand[3], "|  @   @  |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|  @   @  |\t");
			stringCopy(hand[6], "|    @   @|\t");
			stringCopy(hand[7], "|  @   @0l|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 11:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|J /~~|_  |\t");
			stringCopy(hand[2], "|@ ! -\\   |\t");
			stringCopy(hand[3], "|  \\ -!   |\t");
			stringCopy(hand[4], "|  ',\\',  |\t");
			stringCopy(hand[5], "|   I- \\  |\t");
			stringCopy(hand[6], "|   \\- I @|\t");
			stringCopy(hand[7], "|  ~|__/ P|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 12:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|Q |~~~|  |\t");
			stringCopy(hand[2], "|@ \\- -/  |\t");
			stringCopy(hand[3], "| o |-|   |\t");
			stringCopy(hand[4], "|  I % I  |\t");
			stringCopy(hand[5], "|   |-| o |\t");
			stringCopy(hand[6], "|  /- -\\ @|\t");
			stringCopy(hand[7], "|  |___| Q|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 13:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|K |/|\\|  |\t");
			stringCopy(hand[2], "|@ \\- -/  |\t");
			stringCopy(hand[3], "| ! |-|   |\t");
			stringCopy(hand[4], "|  % I %  |\t");
			stringCopy(hand[5], "|   |-| ! |\t");
			stringCopy(hand[6], "|  /- -\\ @|\t");
			stringCopy(hand[7], "|  |\\|/| X|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		}
		break;
	case 'B':
		switch (number) {
		case 1:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|A        |\t");
			stringCopy(hand[2], "|# _   _  |\t");
			stringCopy(hand[3], "| / ~V~ \\ |\t");
			stringCopy(hand[4], "| \\ Bej / |\t");
			stringCopy(hand[5], "|  \\ # /  |\t");
			stringCopy(hand[6], "|   `.'  #|\t");
			stringCopy(hand[7], "|        V|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 2:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|2        |\t");
			stringCopy(hand[2], "|#        |\t");
			stringCopy(hand[3], "|    #    |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|    #    |\t");
			stringCopy(hand[6], "|        #|\t");
			stringCopy(hand[7], "|        Z|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 3:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|3        |\t");
			stringCopy(hand[2], "|#   #    |\t");
			stringCopy(hand[3], "|         |\t");
			stringCopy(hand[4], "|    #    |\t");
			stringCopy(hand[5], "|         |\t");
			stringCopy(hand[6], "|    #   #|\t");
			stringCopy(hand[7], "|        E|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 4:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|4        |\t");
			stringCopy(hand[2], "|#        |\t");
			stringCopy(hand[3], "|  #   #  |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|  #   #  |\t");
			stringCopy(hand[6], "|        #|\t");
			stringCopy(hand[7], "|        b|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 5:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|5        |\t");
			stringCopy(hand[2], "|#        |\t");
			stringCopy(hand[3], "|  #   #  |\t");
			stringCopy(hand[4], "|    #    |\t");
			stringCopy(hand[5], "|  #   #  |\t");
			stringCopy(hand[6], "|        #|\t");
			stringCopy(hand[7], "|        S|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 6:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|6        |\t");
			stringCopy(hand[2], "|# #   #  |\t");
			stringCopy(hand[3], "|         |\t");
			stringCopy(hand[4], "|  #   #  |\t");
			stringCopy(hand[5], "|         |\t");
			stringCopy(hand[6], "|  #   # #|\t");
			stringCopy(hand[7], "|        9|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 7:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|7        |\t");
			stringCopy(hand[2], "|# #   #  |\t");
			stringCopy(hand[3], "|    #    |\t");
			stringCopy(hand[4], "|  #   #  |\t");
			stringCopy(hand[5], "|         |\t");
			stringCopy(hand[6], "|  #   # #|\t");
			stringCopy(hand[7], "|        L|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 8:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|8 #   #  |\t");
			stringCopy(hand[2], "|#        |\t");
			stringCopy(hand[3], "|  #   #  |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|  #   #  |\t");
			stringCopy(hand[6], "|        #|\t");
			stringCopy(hand[7], "|  #   # 8|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 9:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|9 #   #  |\t");
			stringCopy(hand[2], "|#        |\t");
			stringCopy(hand[3], "|  #   #  |\t");
			stringCopy(hand[4], "|    #    |\t");
			stringCopy(hand[5], "|  #   #  |\t");
			stringCopy(hand[6], "|        #|\t");
			stringCopy(hand[7], "|  #   # 6|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 10:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|10#   #  |\t");
			stringCopy(hand[2], "|#   #    |\t");
			stringCopy(hand[3], "|  #   #  |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|  #   #  |\t");
			stringCopy(hand[6], "|    #   #|\t");
			stringCopy(hand[7], "|  #   #0l|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 11:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|J /~~|_  |\t");
			stringCopy(hand[2], "|# % *`.  |\t");
			stringCopy(hand[3], "|  % <~   |\t");
			stringCopy(hand[4], "| %% / %% |\t");
			stringCopy(hand[5], "|   _> %  |\t");
			stringCopy(hand[6], "|  `,* % #|\t");
			stringCopy(hand[7], "|  ~|__/ P|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 12:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|Q |~~~|  |\t");
			stringCopy(hand[2], "|# %*,*%  |\t");
			stringCopy(hand[3], "|  \\_o_/  |\t");
			stringCopy(hand[4], "| -=<*>=- |\t");
			stringCopy(hand[5], "|  /~o~\\  |\t");
			stringCopy(hand[6], "|  %*'*% #|\t");
			stringCopy(hand[7], "|  |___| Q|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 13:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|K |/|\\|  |\t");
			stringCopy(hand[2], "|# %*,*%  |\t");
			stringCopy(hand[3], "|  \\_o_/  |\t");
			stringCopy(hand[4], "| #>-=-<# |\t");
			stringCopy(hand[5], "|  /~o~\\  |\t");
			stringCopy(hand[6], "|  %*'*% #|\t");
			stringCopy(hand[7], "|  |\\|/| X|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		}
		break;
	case 'C':
		switch (number) {
		case 1:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|A        |\t");
			stringCopy(hand[2], "|O  /~\\   |\t");
			stringCopy(hand[3], "|  / ^ \\  |\t");
			stringCopy(hand[4], "| (     ) |\t");
			stringCopy(hand[5], "|  \\ v /  |\t");
			stringCopy(hand[6], "|   \\_/  O|\t");
			stringCopy(hand[7], "|        V|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 2:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|2        |\t");
			stringCopy(hand[2], "|O        |\t");
			stringCopy(hand[3], "|    O    |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|    O    |\t");
			stringCopy(hand[6], "|        O|\t");
			stringCopy(hand[7], "|        Z|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 3:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|3        |\t");
			stringCopy(hand[2], "|O   O    |\t");
			stringCopy(hand[3], "|         |\t");
			stringCopy(hand[4], "|    O    |\t");
			stringCopy(hand[5], "|         |\t");
			stringCopy(hand[6], "|    O   O|\t");
			stringCopy(hand[7], "|        E|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 4:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|4        |\t");
			stringCopy(hand[2], "|O        |\t");
			stringCopy(hand[3], "|  O   O  |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|  O   O  |\t");
			stringCopy(hand[6], "|        O|\t");
			stringCopy(hand[7], "|        b|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 5:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|5        |\t");
			stringCopy(hand[2], "|O        |\t");
			stringCopy(hand[3], "|  O   O  |\t");
			stringCopy(hand[4], "|    O    |\t");
			stringCopy(hand[5], "|  O   O  |\t");
			stringCopy(hand[6], "|        O|\t");
			stringCopy(hand[7], "|        S|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 6:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|6        |\t");
			stringCopy(hand[2], "|O O   O  |\t");
			stringCopy(hand[3], "|         |\t");
			stringCopy(hand[4], "|  O   O  |\t");
			stringCopy(hand[5], "|         |\t");
			stringCopy(hand[6], "|  O   O O|\t");
			stringCopy(hand[7], "|        9|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 7:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|7        |\t");
			stringCopy(hand[2], "|O O   O  |\t");
			stringCopy(hand[3], "|    O    |\t");
			stringCopy(hand[4], "|  O   O  |\t");
			stringCopy(hand[5], "|         |\t");
			stringCopy(hand[6], "|  O   O O|\t");
			stringCopy(hand[7], "|        L|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 8:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|8 O   O  |\t");
			stringCopy(hand[2], "|O        |\t");
			stringCopy(hand[3], "|  O   O  |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|  O   O  |\t");
			stringCopy(hand[6], "|        O|\t");
			stringCopy(hand[7], "|  O   O 8|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 9:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|9 O   O  |\t");
			stringCopy(hand[2], "|O        |\t");
			stringCopy(hand[3], "|  O   O  |\t");
			stringCopy(hand[4], "|    O    |\t");
			stringCopy(hand[5], "|  O   O  |\t");
			stringCopy(hand[6], "|        O|\t");
			stringCopy(hand[7], "|  O   O 6|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 10:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|10O   O  |\t");
			stringCopy(hand[2], "|O   O    |\t");
			stringCopy(hand[3], "|  O   O  |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|  O   O  |\t");
			stringCopy(hand[6], "|    O   O|\t");
			stringCopy(hand[7], "|  O   O0l|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 11:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|J /~~|_  |\t");
			stringCopy(hand[2], "|O ( o\\   |\t");
			stringCopy(hand[3], "|  ! \\l   |\t");
			stringCopy(hand[4], "| ^^^Xvvv |\t");
			stringCopy(hand[5], "|   l\\ I  |\t");
			stringCopy(hand[6], "|   \\o ) O|\t");
			stringCopy(hand[7], "|  ~|__/ P|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 12:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|Q |~~~|  |\t");
			stringCopy(hand[2], "|O |o.o|  |\t");
			stringCopy(hand[3], "|   \\v/   |\t");
			stringCopy(hand[4], "|  XXOXX  |\t");
			stringCopy(hand[5], "|   /^\\   |\t");
			stringCopy(hand[6], "|  |o'o| O|\t");
			stringCopy(hand[7], "|  |___| Q|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 13:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|K |/|\\|  |\t");
			stringCopy(hand[2], "|O |o.o|  |\t");
			stringCopy(hand[3], "|   \\v/   |\t");
			stringCopy(hand[4], "|  XXXXX  |\t");
			stringCopy(hand[5], "|   /^\\   |\t");
			stringCopy(hand[6], "|  |o'o| O|\t");
			stringCopy(hand[7], "|  |\\|/| X|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		}
		break;
	case 'D':
		switch (number) {
		case 1:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|A        |\t");
			stringCopy(hand[2], "|+   *    |\t");
			stringCopy(hand[3], "|    !    |\t");
			stringCopy(hand[4], "|  *-+-*  |\t");
			stringCopy(hand[5], "|    |    |\t");
			stringCopy(hand[6], "|   ~~~  +|\t");
			stringCopy(hand[7], "|        V|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 2:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|2        |\t");
			stringCopy(hand[2], "|+        |\t");
			stringCopy(hand[3], "|    +    |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|    +    |\t");
			stringCopy(hand[6], "|        +|\t");
			stringCopy(hand[7], "|        Z|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 3:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|3        |\t");
			stringCopy(hand[2], "|+   +    |\t");
			stringCopy(hand[3], "|         |\t");
			stringCopy(hand[4], "|    +    |\t");
			stringCopy(hand[5], "|         |\t");
			stringCopy(hand[6], "|    +   +|\t");
			stringCopy(hand[7], "|        E|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 4:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|4        |\t");
			stringCopy(hand[2], "|+        |\t");
			stringCopy(hand[3], "|  +   +  |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|  +   +  |\t");
			stringCopy(hand[6], "|        +|\t");
			stringCopy(hand[7], "|        b|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 5:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|5        |\t");
			stringCopy(hand[2], "|+        |\t");
			stringCopy(hand[3], "|  +   +  |\t");
			stringCopy(hand[4], "|    +    |\t");
			stringCopy(hand[5], "|  +   +  |\t");
			stringCopy(hand[6], "|        +|\t");
			stringCopy(hand[7], "|        S|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 6:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|6        |\t");
			stringCopy(hand[2], "|+ +   +  |\t");
			stringCopy(hand[3], "|         |\t");
			stringCopy(hand[4], "|  +   +  |\t");
			stringCopy(hand[5], "|         |\t");
			stringCopy(hand[6], "|  +   + +|\t");
			stringCopy(hand[7], "|        9|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 7:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|7        |\t");
			stringCopy(hand[2], "|+ +   +  |\t");
			stringCopy(hand[3], "|    +    |\t");
			stringCopy(hand[4], "|  +   +  |\t");
			stringCopy(hand[5], "|         |\t");
			stringCopy(hand[6], "|  +   + +|\t");
			stringCopy(hand[7], "|        L|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 8:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|8 +   +  |\t");
			stringCopy(hand[2], "|+        |\t");
			stringCopy(hand[3], "|  +   +  |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|  +   +  |\t");
			stringCopy(hand[6], "|        +|\t");
			stringCopy(hand[7], "|  +   + 8|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 9:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|9 +   +  |\t");
			stringCopy(hand[2], "|+        |\t");
			stringCopy(hand[3], "|  +   +  |\t");
			stringCopy(hand[4], "|    +    |\t");
			stringCopy(hand[5], "|  +   +  |\t");
			stringCopy(hand[6], "|        +|\t");
			stringCopy(hand[7], "|  +   + 6|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 10:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|10+   +  |\t");
			stringCopy(hand[2], "|+   +    |\t");
			stringCopy(hand[3], "|  +   +  |\t");
			stringCopy(hand[4], "|         |\t");
			stringCopy(hand[5], "|  +   +  |\t");
			stringCopy(hand[6], "|    +   +|\t");
			stringCopy(hand[7], "|  +   +0l|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 11:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|J /~~|_  |\t");
			stringCopy(hand[2], "|+ | o`,  |\t");
			stringCopy(hand[3], "|  | -|   |\t");
			stringCopy(hand[4], "| =~)+(_= |\t");
			stringCopy(hand[5], "|   |- |  |\t");
			stringCopy(hand[6], "|  `.o | +|\t");
			stringCopy(hand[7], "|  ~|__/ P|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 12:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|Q |~~~|  |\t");
			stringCopy(hand[2], "|+ /o,o\\  |\t");
			stringCopy(hand[3], "|  \\_-_/  |\t");
			stringCopy(hand[4], "| _-~+_-~ |\t");
			stringCopy(hand[5], "|  /~-~\\  |\t");
			stringCopy(hand[6], "|  \\o`o/ +|\t");
			stringCopy(hand[7], "|  |___| Q|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		case 13:
			stringCopy(hand[0], " _________ \t");
			stringCopy(hand[1], "|K |/|\\|  |\t");
			stringCopy(hand[2], "|+ /o,o\\  |\t");
			stringCopy(hand[3], "|  \\_-_/  |\t");
			stringCopy(hand[4], "| ~-_-~-_ |\t");
			stringCopy(hand[5], "|  /~-~\\  |\t");
			stringCopy(hand[6], "|  \\o`o/ +|\t");
			stringCopy(hand[7], "|  |\\|/| X|\t");
			stringCopy(hand[8], " ~~~~~~~~~ \t");
			break;
		}
		break;
	case 'E':
		stringCopy(hand[0], " _________ \t");
		stringCopy(hand[1], "|         |\t");
		stringCopy(hand[2], "|         |\t");
		stringCopy(hand[3], "|         |\t");
		stringCopy(hand[4], "|    ?    |\t");
		stringCopy(hand[5], "|         |\t");
		stringCopy(hand[6], "|         |\t");
		stringCopy(hand[7], "|         |\t");
		stringCopy(hand[8], " ~~~~~~~~~ \t");
		break;
	}
}

/*************************************************************
* Function: deal()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Prints a player's hand to the screen.
* Input parameters: Array of Pointers to 'struct card' and
*					an Array of String Arrays.
* Returns: Void
* Preconditions: Memory must be allocated for struct** and char***.
*************************************************************/
void deal(struct card *hand[], char ***cards) {
	for (int y = 0; y < LENGTH; y++) {
		for (int x = 0; x < HAND; x++) {
			for (int z = 0; cards[x][y][z] != 0; z++) {
				printf("%c", cards[x][y][z]);
			}
		}
		printf("\n");
	}


}

/*************************************************************
* Function: replace()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Allows a player to change their hand.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Void
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
void replace(struct card *hand[]) {
	char request[5] = { 0 };
	int amount = 0, card = 0;
	int save[6] = { 0 };

	//Asks the user for the amount of cards they want to replace
	do {
		printf("How many cards would you like to replace?\n");
		scanf("%s", request);
		amount = atoi(request);
		if (amount == 0)
			return;
	} while (amount < 1 || amount > 5);

	//Uses the previous data to ask which cards they want to replace.
	for (int i = 0; i < amount; i++) {
		do {
			card = -1;
			printf("Which card would you like to replace? >> ");
			scanf("%s", request);
			card = atoi(request);
			save[i + 1] = card;
		} while (card < 1 || card > 5 || save[i] == card);
		hand[card - 1]->number = rand() % 13 + 1;
		hand[card - 1]->suit = rand() % 4 + 65;
	}
}

/*************************************************************
* Function: ai()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: The strategy of the dealer.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for successful/failed attempt.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int ai(struct card *hand[]) {
	int numberTwo = 0, count = 0;

	//Does not change hand if straight or flush returns true.
	if (straight(hand) != 0)
		return 1;
	if (flush(hand) != 0)
		return 1;

	//Replaces cards according to which hand they cary.
	if (fourKind(hand) != 0) {
		if (fourKind(hand) == ACE) {
			for (int i = 0; i < HAND; i++) {
				if (hand[i]->number != 1) {
					hand[i]->number = rand() % 13 + 1;
					hand[i]->suit = rand() % 4 + 65;
				}
			}
		}
		else {
			for (int i = 0; i < HAND; i++) {
				if (hand[i]->number != fourKind(hand)) {
					hand[i]->number = rand() % 13 + 1;
					hand[i]->suit = rand() % 4 + 65;
				}
			}
		}
		return 1;
	}
	else if (threeKind(hand) != 0) {
		if(threeKind(hand) == ACE)
			for (int i = 0; i < HAND; i++) {
				if (hand[i]->number != 1) {
					hand[i]->number = rand() % 13 + 1;
					hand[i]->suit = rand() % 4 + 65;
				}
			}
		else {
			for (int i = 0; i < HAND; i++) {
				if (hand[i]->number != threeKind(hand)) {
					hand[i]->number = rand() % 13 + 1;
					hand[i]->suit = rand() % 4 + 65;
				}
			}
		}
		return 1;
	}
	else if (twoPair(hand, &numberTwo) != 0) {
		if (twoPair(hand, &numberTwo) == ACE) {
			for (int i = 0; i < HAND; i++) {
				if (hand[i]->number != 1) {
					hand[i]->number = rand() % 13 + 1;
					hand[i]->suit = rand() % 4 + 65;
				}
			}
		}
		else {
			for (int i = 0; i < HAND; i++) {
				if (hand[i]->number != numberTwo) {
					hand[i]->number = rand() % 13 + 1;
					hand[i]->suit = rand() % 4 + 65;
				}
			}
		}
		return 1;
	}
	else if (pair(hand) != 0) {
		if (pair(hand) == ACE) {
			for (int i = 0; i < HAND; i++) {
				if (hand[i]->number != 1) {
					hand[i]->number = rand() % 13 + 1;
					hand[i]->suit = rand() % 4 + 65;
				}
			}
		}
		else {
			for (int i = 0; i < HAND; i++) {
				if (hand[i]->number != pair(hand)) {
					hand[i]->number = rand() % 13 + 1;
					hand[i]->suit = rand() % 4 + 65;
				}
			}
		}
		return 1;
	}
	//If all else fails:
	else {
		shuffle(hand);
	}
	return 0;
}

/*************************************************************
* Function: pair()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines if a player's hand has a pair.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int pair(struct card *hand[]) {
	int number = 0;
	for (int i = 1; i <= 13; i++) {
		int count = 0;
		for (int j = 0; j < HAND; j++) {
			if (hand[j]->number == i)
				count++;
		}
		if (count == 2 && number > 0)
			return 0;
		else if (count == 2 && i == 1)
			number = ACE;
		else if (count == 2)
			number = i;
	}
	return number;
}

/*************************************************************
* Function: twoPair()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines if a player's hand has two pairs.
* Input parameters: Array of Pointers to 'struct card', and
*					Integer Pointer for second pair.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int twoPair(struct card *hand[], int *numberTwo) {
	int numberOne = 0;
	for (int i = 1; i <= 13; i++) {
		int count = 0;
		for (int j = 0; j < HAND; j++) {
			if (hand[j]->number == i)
				count++;
		}
		if (count == 2 && i == 1)
			numberOne = ACE;
		else if (count == 2 && numberOne == 0)
			numberOne = i;
		else if (count == 2 && numberOne != 0) {
			*numberTwo = i;
			return numberOne;
		}
	}
	return 0;
}

/*************************************************************
* Function: threeKind()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines if a player's hand has three of a kind.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int threeKind(struct card *hand[]) {
	for (int i = 1; i <= 13; i++) {
		int count = 0;
		for (int j = 0; j < HAND; j++) {
			if (hand[j]->number == i)
				count++;
		}
		if (count == 3 && i == 1)
			return ACE;
		else if (count == 3)
			return i;
	}
	return 0;
}

/*************************************************************
* Function: fourKind()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines if a player's hand has four of a kind.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int fourKind(struct card *hand[]) {
	for (int i = 1; i <= 13; i++) {
		int count = 0;
		for (int j = 0; j < HAND; j++) {
			if (hand[j]->number == i)
				count++;
		}
		if (count == 4 && i == 1)
			return ACE;
		else if (count == 4)
			return i;
	}
	return 0;
}

/*************************************************************
* Function: flush()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines if a player's hand has a flush.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Character for suit.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
char flush(struct card *hand[]) {
	int i = 0;
	for (i = 0; i < 4; i++) {
		int count = 0;
		for (int j = 0; j < HAND; j++) {
			if (hand[j]->suit == (char)(i + 'A'))
				count++;
		}
		if (count == 5)
			return i + 'A';
	}
	return 0;
}

/*************************************************************
* Function: fiveKind()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines if a player's hand has five of a kind.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int fiveKind(struct card *hand[]) {
	for (int i = 1; i <= 13; i++) {
		int count = 0;
		for (int j = 0; j < HAND; j++) {
			if (hand[j]->number == i)
				count++;
		}
		if (count == 5)
			return 1;
	}
	return 0;
}

/*************************************************************
* Function: straight()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determine's if a player's hand has a straight.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int straight(struct card *hand[]) {
	int sum = 0, count = 0;
	int freq[15] = { 0 };

	for (int s = 0; s < HAND; s++)
		sum += hand[s]->number;
	for (int i = 0; i <= 13; i++) {
		for (int j = 0; j < HAND; j++)
			if (hand[j]->number == i)
				freq[i]++;
	}
		
	if (freq[1] == 1 && freq[10] == 1 && freq[11] == 1 && freq[12] == 1 && freq[13] == 1 && flush(hand) > 0)
		return RFLSH;
	else if (freq[1] == 1 && freq[10] == 1 && freq[11] == 1 && freq[12] == 1 && freq[13] == 1)
		return sum;
	else {
		for (int i = 1; i <= LENGTH; i++) {
			count = 0;
			for (int j = i; j < i + 4; j++)
				if (freq[i] == 1)
					count++;
		}
		if (count == HAND && flush(hand) > 0)
			return STFLS;
		else if (count == HAND)
			return sum;
	}

	return 0;
}

/*************************************************************
* Function: highCard()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines the highest card in a player's hand.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int highCard(struct card *hand[]) {
	int proxy = 0, max = 0;
	if (pair(hand) == 0 && twoPair(hand, &proxy) == 0 && threeKind(hand) == 0 && fourKind(hand) == 0 && fiveKind(hand) == 0 && straight(hand) == 0) {
		for (int i = 0; i < HAND; i++) {
			if (hand[i]->number == 1)
				return ACE;
			else if (hand[i]->number > max)
				max = hand[i]->number;
		}
	}
	return max;
}

/*************************************************************
* Function: winner()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines the winner of a game.
* Input parameters: Array of Pointers to 'struct card' for
*					human and computer, and integer pointers
*					for the current score.
* Returns: Void
* Preconditions: Memory must be allocated for both struct**'s.
*************************************************************/
void winner(struct card *aiHand[], struct card *humanHand[], int *aiWins, int *humanWins) {
	int proxyOne = 0, proxyTwo = 0, aiScore = 0, humanScore = 0;

	//Determines the score based on the highest possible condition.
	if (highCard(aiHand) != 0)
		aiScore += highCard(aiHand);
	if (highCard(humanHand) != 0)
		humanScore += highCard(humanHand);
	if (pair(aiHand) != 0)
		aiScore += (pair(aiHand) + ACE);
	if (pair(humanHand) != 0)
		humanScore += (pair(humanHand) + ACE);
	if (twoPair(aiHand, &proxyOne) != 0)
		aiScore += twoPair(aiHand, &proxyOne) + proxyOne + PAIR;
	if (twoPair(humanHand, &proxyTwo) != 0)
		humanScore += twoPair(humanHand, &proxyTwo) + proxyTwo + PAIR;
	if (threeKind(aiHand) != 0)
		aiScore += threeKind(aiHand) + TWOPR;
	if (threeKind(humanHand) != 0)
		humanScore += threeKind(humanHand) + TWOPR;
	if (straight(aiHand) != 0)
		aiScore += straight(aiHand) + THREEK;
	if (straight(humanHand) != 0)
		humanScore += straight(humanHand) + THREEK;
	if ((int)flush(aiHand) != 0)
		aiScore += (int)flush(aiHand) + STRGT;
	if ((int)flush(humanHand) != 0)
		humanScore += (int)flush(humanHand) + STRGT;
	if (fourKind(aiHand) != 0)
		aiScore += fourKind(aiHand) + FLUSH;
	if (fourKind(humanHand) != 0)
		humanScore += fourKind(humanHand) + FLUSH;

	//Prints the results to the player.
	if (humanScore > aiScore) {
		printf("\nCongratulations, YOU WON!!!\n");
		*humanWins += 1;
	}
	else if (humanScore == aiScore)
		printf("\nLooks like we have a TIE!!!\n");
	else {
		printf("\nSorry, you lost this game.\n");
		*aiWins += 1;
	}

	printf("Human Score: %d\nComputer Score: %d\n", *humanWins, *aiWins);
	if ((*humanWins + *aiWins) < 10)
		printf("To play again:\n");
	else
		printf("To go back to the menu:\n");
	system("pause");
}

/*************************************************************
* Function: freeCards()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Frees memory for char***.
* Input parameters: Array of String Arrays.
* Returns: Void
* Preconditions: None.
*************************************************************/
void freeCards(char ***cards) {
	for (int i = 0; i < HAND; i++) {
		if (cards[i]) {
			for (int j = 0; j < LENGTH; j++)
				free(cards[i][j]);
			free(cards[i]);
		}
	}
	free(cards);
}

/*************************************************************
* Function: freeHand()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Frees memory for struct**.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Void
* Preconditions: None.
*************************************************************/
void freeHand(struct card *hand[]) {
	for (int i = 0; i < HAND; i++)
		free(hand[i]);
	free(hand);
}

/*************************************************************
* Function: playGame()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Starts a sequence of 10 games.
* Input parameters: None.
* Returns: Void
* Preconditions: None.
*************************************************************/
void playGame(void) {
	int humanScore = 0, computerScore = 0;

	//Allocates memory for the char*** and struct**.
	for (int i = 0; i < 10; i++) {
		struct card **humanHand = malloc(HAND * sizeof(struct card*));
		char ***humanCards = (char***)malloc(HAND * sizeof(char**));

		struct card **aiHand = malloc(HAND * sizeof(struct card*));
		char ***aiCards = (char***)malloc(HAND * sizeof(char**));

		for (int i = 0; i < HAND; i++) {
			humanHand[i] = malloc(HAND * sizeof(struct card));
			aiHand[i] = malloc(HAND * sizeof(struct card));
			humanCards[i] = (char**)malloc(LENGTH * sizeof(char*));
			aiCards[i] = (char**)malloc(LENGTH * sizeof(char*));
			for (int j = 0; j < LENGTH; j++) {
				humanCards[i][j] = (char*)malloc(20 * sizeof(char));
				aiCards[i][j] = (char*)malloc(20 * sizeof(char));
				for (int k = 0; k < 20; k++) {
					humanCards[i][j][k] = 0;
					aiCards[i][j][k] = 0;
				}
			}
		}

		//Starts the game with random deck.
		shuffle(humanHand);
		shuffle(aiHand);

		for (int i = 0; i < HAND; i++) {
			setCard(humanHand[i]->number, humanHand[i]->suit, humanCards[i]);
			setCard(0, 'E', aiCards[i]);
		}

		//Loop for each round.
		for (int j = 0; j < 3; j++) {
			system("cls");
			printf("Dealer:\n");
			deal(aiHand, aiCards);
			printf("\nPlayer:\n\n");
			printf("  Card  1         Card  2         Card  3         Card  4         Card  5\n");
			deal(humanHand, humanCards);
			replace(humanHand);
			while (ai(aiHand) < 1);
			for (int i = 0; i < HAND; i++)
				setCard(humanHand[i]->number, humanHand[i]->suit, humanCards[i]);
		}

		//End of game.
		system("cls");
		for (int i = 0; i < HAND; i++)
			setCard(aiHand[i]->number, aiHand[i]->suit, aiCards[i]);
		printf("Dealer:\n");
		deal(aiHand, aiCards);
		printf("\nPlayer:\n\n");
		printf("  Card  1         Card  2         Card  3         Card  4         Card  5\n");
		deal(humanHand, humanCards);
		winner(aiHand, humanHand, &computerScore, &humanScore);

		freeCards(humanCards);
		freeCards(aiCards);
		freeHand(humanHand);
		freeHand(aiHand);
	}
}

/*************************************************************
* Function: rules()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Prints the rules of 'Five-card Draw" to the user.
* Input parameters: None.
* Returns: Void
* Preconditions: None.
*************************************************************/
void rules(void) {
	system("cls");
	printf("This version of Poker is based on Five-card draw\n"
		"The player faces their computer as the dealer,\n"
		"beginning the game with a random set of five cards\n"
		"for each side. The user is then able to replace any\n"
		"amount of cards from 1-5 or keep their hand by\n"
		"pressing 0. Each side is given three chances after\n"
		"the initial draw to produce a competitive hand.\n"
		"The game ends with the reveal of each opponents' hand\n"
		"and their score.\n");
	system("pause");
}

/*************************************************************
* Function: runApp()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Runs the main menu.
* Input parameters: None.
* Returns: Void
* Preconditions: None.
*************************************************************/
void runApp(void) {
	char temp[10] = { 0 };
	int option = 0;
	while (option != 3) {
		do {
			system("cls");
			printf("Welcome to Poker: Five-card Draw!\n");
			printf("Press 1. Rules\n");
			printf("Press 2. Play\n");
			printf("Press 3. Exit\n");
			scanf("%s", temp);
			option = atoi(temp);
		} while (option < 1 || option > 3);

		switch (option) {
		case 1:
			rules();
			break;
		case 2:
			playGame();
			break;
		case 3:
			exit(0);
			break;
		}
	}
}
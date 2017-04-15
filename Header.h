/*
* =====================================================================================
*
*       Filename:  Header.h
*
*    Description:  This file includes function declarations for the program.
*
*        Version:  1.0
*        Created:  12/3/2016 10:26:02 PM
*       Revision:  none
*       Compiler:  msft c
*
*         Author:  Edgar Perez
*   Organization:  Washington State University
*
* =====================================================================================
*/

#ifndef	_HEADER_H
#define	_HEADER_H

#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>

#define		LENGTH	9
#define		HAND	5
#define		ACE		14
#define		RFLSH	400
#define		PAIR	28
#define		TWOPR	55
#define		THREEK	97
#define		STRGT	152
#define		FLUSH	220
#define		STFLS	300
#define		FOURK	153

struct card {
	int number;
	char suit;
};

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
void stringCopy(char *dest, const char *source);

/*************************************************************
* Function: shuffle()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Randomizes a player's hand.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Void
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
void shuffle(struct card *hand[]);

/*************************************************************
* Function: setCard()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Sets a card inside a String Array.
* Input parameters: Integer for card number, suit, and
*					and Array of Strings.
* Returns: Void
* Preconditions: Memory must be allocated for char**.
*************************************************************/
void setCard(int number, int suit, char *hand[]);

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
void deal(struct card *hand[], char ***cards);

/*************************************************************
* Function: replace()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Allows a player to change their hand.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Void
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
void replace(struct card *hand[]);

/*************************************************************
* Function: ai()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: The strategy of the dealer.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for successful/failed attempt.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int ai(struct card *hand[]);

/*************************************************************
* Function: pair()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines if a player's hand has a pair.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int pair(struct card *hand[]);

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
int twoPair(struct card *hand[], int *numberTwo);

/*************************************************************
* Function: threeKind()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines if a player's hand has three of a kind.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int threeKind(struct card *hand[]);

/*************************************************************
* Function: fourKind()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines if a player's hand has four of a kind.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int fourKind(struct card *hand[]);

/*************************************************************
* Function: flush()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines if a player's hand has a flush.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Character for suit.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
char flush(struct card *hand[]);

/*************************************************************
* Function: fiveKind()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines if a player's hand has five of a kind.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int fiveKind(struct card *hand[]);

/*************************************************************
* Function: straight()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determine's if a player's hand has a straight.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int straight(struct card *hand[]);

/*************************************************************
* Function: highCard()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Determines the highest card in a player's hand.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Integer for score.
* Preconditions: Memory must be allocated for struct**.
*************************************************************/
int highCard(struct card *hand[]);

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
void winner(struct card *aiHand[], struct card *humanHand[], int *aiWins, int *humanWins);

/*************************************************************
* Function: freeCards()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Frees memory for char***.
* Input parameters: Array of String Arrays.
* Returns: Void
* Preconditions: None.
*************************************************************/
void freeCards(char ***cards);

/*************************************************************
* Function: freeHand()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Frees memory for struct**.
* Input parameters: Array of Pointers to 'struct card'.
* Returns: Void
* Preconditions: None.
*************************************************************/
void freeHand(struct card *hand[]);

/*************************************************************
* Function: playGame()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Starts a sequence of 10 games.
* Input parameters: None.
* Returns: Void
* Preconditions: None.
*************************************************************/
void playGame(void);

/*************************************************************
* Function: rules()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Prints the rules of 'Five-card Draw" to the user.
* Input parameters: None.
* Returns: Void
* Preconditions: None.
*************************************************************/
void rules(void);

/*************************************************************
* Function: runApp()
* Date Created: 12/3/2016
* Date Last Modified: 12/9/2016
* Description: Runs the main menu.
* Input parameters: None.
* Returns: Void
* Preconditions: None.
*************************************************************/
void runApp(void);

#endif
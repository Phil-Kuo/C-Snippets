/*Classifies a poker hand*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_CARDS 5

/*external variable*/
char hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs; /*can be 0, 1 or 2*/

/*prototypes*/
void read_cards(void);
void analyze_hand(void);
void print_results(void);

/************************************************************
* main: Calls read_cards, analyze_hand, and print_results 	*
* 		repeatedly.											*
************************************************************/

int
main (int argc, char *argv[])
{
	for (;;)
	{
		read_cards();
		analyze_hand();
		print_results();
	}
	return 0;
}

/************************************************************
* read_cards: Reads the cards into the external variables 	*
* 			  hand; checks for bad cards and duplicate		*
* 			   cards.										* 
* **********************************************************/

void 
read_cards(void)
{
	char ch, rank_ch, suit_ch;
	int rank, suit, i;
	bool bad_card, duplicate_card;
	int cards_read = 0;
	
	while (cards_read < NUM_CARDS)
	{
		bad_card = false;
		
		printf("Enter a card: ");
		
		rank_ch = getchar();
		switch (rank_ch)
		{
			case '0': 			exit(EXIT_SUCCESS);
			case '2':			rank = 0; break;
			case '3':			rank = 1; break;
			case '4':			rank = 2; break;
			case '5':			rank = 3; break;
			case '6':			rank = 4; break;
			case '7':			rank = 5; break;
			case '8':			rank = 6; break;
			case '9':			rank = 7; break;
			case 't': case 'T':	rank = 8; break;
			case 'j': case 'J':	rank = 9; break;
			case 'q': case 'Q':	rank = 10; break;
			case 'k': case 'K': rank = 11; break;
			case 'a': case 'A':	rank = 12; break;	
			default:			bad_card = true;
		}
		
		suit_ch = getchar();
		switch (suit_ch)
		{
			case 'c': case 'C':	suit = 0; break;
			case 'd': case 'D':	suit = 1; break;
			case 'h': case 'H':	suit = 2; break;
			case 's': case 'S': suit = 3; break;
			default:			bad_card = true;
		}
		
		while ((ch = getchar()) != '\n')
		{
			if (ch != ' ')
			{
				bad_card = true;
			}
		}
		
		duplicate_card = false;
		for (i = 0; i < cards_read; i++)
		{
			if (rank_ch == hand[i][0] && suit_ch == hand[i][1])
			{
				duplicate_card = true;
				break;
			}
		}
		if (bad_card)
		{
			printf("Bad card; ignored.\n");
		}
		else if (duplicate_card)
		{
			printf("Duplicate card; ignored\n");
		}
		else
		{
			hand[cards_read][0] = rank_ch;
			hand[cards_read][1] = suit_ch;
			cards_read++;
		}	
	}
}

/********************************************************************
 * analyze_hand: Determines whether the hand contains a straight, a	*
 * 				flush, four-of-a-kind, three-of-a-kind, and/or		*
 * 				three-of-a-kind; determines the number of pairs		*
 * 				stores the results into the external variables		*
 * 				straight, flush, four, three, and pairs.			*
 * ******************************************************************/

void
analyze_hand(void)
{
	int num_consec = 0, pass, card, rank, suit;
	
	straight = true;
	flush = true;
	four = false;
	three = false;
	pairs = 0;
	
	/*sort card by rank*/
	for (pass = 1; pass < NUM_CARDS; pass++)
	{
		for (card = 0; card < NUM_CARDS - pass; card++)
		{
			rank = hand[card][0];
			suit = hand[card][1];
			if (hand[card+1][0] < rank)
			{
				hand[card][0] = hand[card+1][0];
				hand[card][1] = hand[card+1][1];
				hand[card+1][0] = rank;
				hand[card+1][1] = suit;
				
			}
		}
	}
	
	/*check for flush*/	
	suit = hand[0][1];
	for (card = 1; card < NUM_CARDS; card += 1)
	{
		if (hand[card][1] != suit)
		{
			flush = false;
		}
	}
	
	/*check for straight*/
	for (card = 0; card < NUM_CARDS - 1; card++)
	{
		if (hand[card][0] + 1 != hand[card+1][0])
		{
			straight = false;
		}
	}
	
	/*check for 4-of-a-kind, 3-of-a-kind, and pairs*/
	while (card < NUM_CARDS)
	{
		rank = hand[card][0];
		for (card = 0; card < NUM_CARDS; card++)
		{
			if (hand[card][0] == rank)
			{
				num_consec++;
			}
		}
		
	}
	switch (num_consec)
	{
		case 4: four = true; 	break;
		case 3: three = true; 	break;
		case 2: pairs++; 		break;
	}
}

/****************************************************************
 * print_results: prints the classification of the hand,		*
 * 				  based on the values of the external variables *
 * 				  straight, flush, four, three, and pairs.		* 
 * **************************************************************/

void
print_results(void)
{
	if (straight && flush)  printf("Straight flush");
	else if (four) 		    printf("Four of a kind");
	else if (three && pairs == 1)	printf("Full house");
	else if (flush)			printf("Flush");
	else if (straight)		printf("Straight");
	else if (three) 		printf("Three of a kind");
	else if (pairs == 2) 	printf("Two pairs");
	else if (pairs == 1)	printf("Pair");
	else 					printf("High card");
	printf("\n\n");
}






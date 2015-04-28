/*Deals a random hand of cards.*/

#include <stdio.h>
#include <stdbool.h> /*C99 only*/
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int
main (int argc, char *argv[])
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {{false}};
    int num_cards, rank, suit;
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
    const char suit_code[] = {'c', 'd', 'h', 's'};
    
    srand((unsigned) time(NULL));/*初始化随机数生成器*/
    
    printf("Enter numbers of cards in hand: ");
    scanf("%d", &num_cards);
    
    printf("Your cards:");
    while (num_cards > 0)
    {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank])
        {
            char *rank_str, *suit_str;
            
            in_hand[suit][rank] = true;
            num_cards--;
            
            switch (rank_code[rank])
            {
            	case '2': rank_str = "Two"; break;
            	case '3': rank_str = "Three"; break;
            	case '4': rank_str = "Four"; break;
            	case '5': rank_str = "Five"; break;
            	case '6': rank_str = "Six"; break;
            	case '7': rank_str = "Seven"; break;
            	case '8': rank_str = "Eight"; break;
            	case '9': rank_str = "Nine"; break;
            	case 't': rank_str = "Ten"; break;
            	case 'j': rank_str = "Jack"; break;
            	case 'q': rank_str = "Queen"; break;
            	case 'k': rank_str = "King"; break;
            	case 'a': rank_str = "Ace"; break;
            }
            
            switch (suit_code[suit])
            {
            	case 'c': suit_str = "clubs"; break;
            	case 'd': suit_str = "diamonds"; break;
            	case 'h': suit_str = "hearts"; break;
            	case 's': suit_str = "spades"; break;
            }
            printf("\n%s of %s", rank_str, suit_str);      
        }
        
    }
    printf("\n");

    return 0;
}

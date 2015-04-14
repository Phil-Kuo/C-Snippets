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
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
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
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
        
    }
    printf("\n");

    return 0;
}
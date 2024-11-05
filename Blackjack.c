#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int decksize = 52, blackjack = 21, dealerstand = 17;
int deck[52], deckposition = 0;

void startdeck()
{
	int value[] = {2,3,4,5,6,7,8,9,10,10,10,10,11};
	int count = 0, i, j, k, randomdex, temp;
	for (i = 0; i < 4; i++)
	{
		for(j = 0; j < 13; j++)
		{
			deck[count++] = value[j];
		}
	}

	srand(time(0));
	for(k = 0; k < decksize; k++)
	{
		randomdex = rand() % decksize;
		temp = deck[k];
		deck[k] = deck[randomdex];
		deck[randomdex] = temp;
	}
	deckposition = 0;
}

int drawcard()
{
	return deck[deckpostion++];
}

int main()
{

	return 0;
}

#include <stdio.h>
#include <windows.h> # for windows
#include <unistd.h> # for linux

int main(void)
{
	printf("For this trick, you'll need a deck of cards.");
	sleep(5);
	printf("Shuffle the deck.");
	sleep(5);
	printf("Tell me a number between one and ten.");
	scanf("%d", &small_int);
	sleep(5);
	printf("Good. Now deal two deck with %d cards. One for you and one for me. Make sure both decks have the same number of cards.", small_int);
	sleep(5);
	printf("Pick up your pile and look at the bottom card of your deck. Memorize this. This is your card."
	sleep(5);
	printf("Put your pile on top of the deck that you've been dealing from. Now, every time I say 'Deal,' I want you to place a card, face-down, on the table, forming a new deck.");
	sleep(5);
	for(int i = 0; i < 11; i++)
		{
			printf("Deal.")
			sleep(5);
		}
	printf("Stop.")
	sleep(5);
	printf("Now place your newly-formed deck on top of the deck you've been dealing with. Place also my deck on top of it. Start dealing again on my command."
	sleep(5);
	for(int i = 0; i < 11; i++)
		{
			printf("Deal.")
			sleep(5);
		}
	printf("Stop.")
	sleep(5);
	printf("Turn over the top card of the deck. This is your card."
}

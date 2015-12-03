#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLENGTH 80
#define MAX_TRIES 5

int alpha_insert (char, char[], char[]);
void init_unknown (char[], char[]);

int main()
{
	int num_of_wrong_guess = 0;

	char alphabet;
	char unknown[MAXLENGTH];
	char word[MAXLENGTH];
	char words[5][MAXLENGTH] = {
		"struct",
		"extern",
		"typedef",
		"sizeof",
		"volatile"
							  };

	int n = rand () / 5 * 5;
	strcpy (word, words[n]);

	init_unknown (word, unknown);

	printf ("\n\nLet's Play C Hangman....Guess a C keyword");
	printf ("\n\nEach letter is represented by an underscore.");
	printf ("\n\nYou have to type only one letter in a single try");
	printf ("\n\nYou have %d tries to try and guess the keyword", MAX_TRIES);
	printf ("\n---------------------------------------------------");

}

void init_unknown (char word[], char unknown[])
{
	int i;
	int length = strlen (word);
	for (i = 0; i < length; ++i)
	{
		unknown[i] = '-';
	}
	unknown[i] = '\0';
}

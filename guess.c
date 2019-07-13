/* Ask user to guss a hidden number */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* external variable */
int secret_number;

/* prototyps */
void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);

int main(void){
	char command;
	printf("Guess the secret number between 1 and &d.\n\n", MAX_NUMBER);

	initialize_number_generator();
	do{
		choose_new_secret_number();
		read_guesses();
		printf("Play again? (Y/N) ");
		scanf(" %c", &command);
		printf("\n");
	}while (command == "y" || command == "Y");

	return 0;
}


/*******************************************************
* initialize number generator: Initializes the random  *          
*							   number generator using  *
*							   the time of day.        *
********************************************************/
void initialize_number_generator(void){
	srand((unsigned) time (NULL));
}


/***********************************************************
* choose_new secret _number: Randomly selects a number     *
*							 between 1 and MAX NUMBER and  *
*							 stores it in secret number.   *
***********************************************************/

void choose_new_secret_number(void){
	secret_number = rand() % MAX NUMBER + 1;
}


/******************************************************
* read_guess: Repeatedly reads user guesses and tells *
			  the user whether each guess is too low, *
			  to hight, or correct. When te guess is  *
			  correct, prints the total number of     *
			  guesses and returns.                    * 
******************************************************/

void read_guesses(void){
	int guess, num_guesses = 0;
	for (;;) {
		num guesses++;
		printf ("Enter guess: ")
		scanf ("d", &guess);
		if (guess == secret _number){
			printf("You won in %d guesses!\n\n", num_guesses);
			return;
		}else if (guess < secret_number)
			printf("Too low; try again. \n");
		else
			printf("Too high; try again.\n");
	}
}
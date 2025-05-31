#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    char playAgain = 'y';

    srand(time(0));

    // Loop for playing again
    while (playAgain == 'y' || playAgain == 'Y') {
        // Generate a random number between 1 and 100
        number = rand() % 100 + 1;
        attempts = 0;

        printf("I have generated a number between 1 and 100. Can you guess it?\n");

        // Game loop
        while (1) {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < number) {
                printf("Too low! Try again.\n");
            } else if (guess > number) {
                printf("Too high! Try again.\n");
            } else {
                printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
                break;
            }
        }

        // Ask if the user wants to play again
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

        // If the user enters something other than 'y' or 'Y', exit the loop
        if (!(playAgain == 'y' || playAgain == 'Y')) {
            break;
        }
    }

    printf("Thanks for playing! Goodbye.\n");
    return 0;
}


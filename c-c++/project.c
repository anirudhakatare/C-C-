#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    srand(time(0));          // seed random number
    number = rand() % 100 + 1; // random number between 1 and 100

    printf("Guess the number (1 to 100): ");

    do {
        scanf("%d", &guess);

        if (guess > number)
            printf("Too high! Try again: ");
        else if (guess < number)
            printf("Too low! Try again: ");
        else
            printf("Correct! You guessed it!\n");

    } while (guess != number);

    return 0;
}

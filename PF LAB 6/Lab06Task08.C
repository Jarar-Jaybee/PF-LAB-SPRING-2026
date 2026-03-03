#include <stdio.h>

int main() {
    int guess;
    const int correctNumber = 7;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the correct number between 1 and 10.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < correctNumber) {
            printf("Too Low! Try again.\n");
        } else if (guess > correctNumber) {
            printf("Too High! Try again.\n");
        } else {
            printf("Correct! You've guessed the number!\n");
            break;
        }
    }

    return 0;
}
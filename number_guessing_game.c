#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, input;
    srand(time(0));
    int guess = rand() % 101;
    printf("\033[1;32m");
    printf("\vYou have to guess a number between the given range\n\v");
    while (1) {
        printf("\033[1;33m");
        printf("\nEnter a number between 0 and 100: ");
        input = scanf("%d", &num);
        if (input != 1) {
            printf("\033[1;31m");
            printf("\nInvalid input! Please enter a valid number between 0 and 100.\n");
            while (getchar() != '\n');
            continue;
        }
        if (num < 0 || num > 100) {
            printf("\033[1;31m");
            printf("\nOut of range! Please enter a number between 0 and 100.\n");
            continue;
        }
        if (num > guess) {
            printf("\033[1;36m");
            printf("\nToo high! Try a lower number.\n");
        } else if (num < guess) {
            printf("\033[1;36m");
            printf("\nToo low! Try a higher number.\n");
        } else {
            printf("\033[1;34m");
            printf("\nCongratulations! You guessed the right number: %d\n\n", guess);
            break;
        }
    }

    return 0;
}

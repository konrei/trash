#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int secretNumber = 5;
    int guess;
    int guessCounter = 1;

    while (guess != secretNumber)
    {
        printf("Your guess? (%d/3 of available guesses) > ", guessCounter);
        scanf("%d", &guess);
        guessCounter++;
        if (guess == secretNumber)
        {
            printf("\nCongratz! You've found the secret number! (%d)\n", secretNumber);
            break;
        }
        else if (guessCounter == 4)
        {
            printf("\nSorry, you couldn't find the secret number. :( \n", secretNumber);
            break;
        }

    }


}

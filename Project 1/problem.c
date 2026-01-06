#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;
    int num_of_guesses = 0;
    int guessed_number;

    // Seed the random number generator
    srand(time(NULL));

    // Generate random number between 1 and 100
    randomNumber = (rand() % 100) + 1;

    // printf("Random number between 1 and 100: %d\n", randomNumber);

    do
    {
        printf("Guess The Number :");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber)
        {
            printf("Lower Number Please\n");
        }
        else if(guessed_number < randomNumber)
        {
            printf("Higher Number Please\n");
        }
        else{
            printf("Congrats !!");
        }

        num_of_guesses++;
    } while (guessed_number != randomNumber);

    printf("You guessed the Numbere in %d guesses \n", num_of_guesses);

    return 0;
}

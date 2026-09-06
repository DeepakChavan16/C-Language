// Game name is Guess the name
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    // Intialize random number generator
    srand(time(0));

    // Generate random number between 1 to 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Print the random number
    do 
    {
        printf("Guess the number :");
        scanf("%d", &guessed);
        if(guessed>randomNumber){
            printf("Lower number please!\n");
        }
        else if(guessed<randomNumber){
            printf("Higher number please!\n");
        }
        else{
            printf("Congrats!\n");
        }
        no_of_guesses++;
    
    } while (guessed != randomNumber);
        printf("You gussed the number in %d guesses\n", no_of_guesses);
    return 0;
}

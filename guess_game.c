#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random, guess;
    int no_of_guesses = 0;
    srand(time(NULL));
        
    printf("Welcome to the world of guessing a number\n");
    random = rand() % 100 + 1; //generating a random number b/w 0 to 100
    

    do{
        printf("Please enter a number between 1 to 100: ");
        scanf("%d",&guess);
        no_of_guesses++;

        if(guess > random)
        {
            printf("the number is smaller than you have thought >_<\n");
        }
        else if(guess < random)
        {
            printf("the number is larger than you have thought >_<\n");
        }
        else{
            printf("Congratulation! you have guessed the exact number!! \n you have guessed in %d  attempts", no_of_guesses);
        }

    }
    while(guess!=random);
    printf("\nBye byee~ Thanks for playing ^^");
    printf("\nDeveloped by sakshidas825-source");
    
}
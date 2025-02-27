#include<stdio.h>
#include<time.h>


int main()
{
    int num_comp;
    int num_you,attemp = 0;


    srand(time(NULL));
    num_comp = rand() % 100 + 1;


    do {
        printf("Enter your guess: ");
        scanf("%d", &num_you);

        attemp++;

        if (num_you < num_comp) {
            printf("Too low! Try again.\n");
        } else if (num_you > num_comp) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number.\n");
            printf("you are guessed number in %d attemps",attemp);
        }
    } while (num_you != num_comp);
}

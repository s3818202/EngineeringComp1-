#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    const int ROCK = 0, PAPER = 1, SCISSORS = 2, EXIT = -1;
    int computer, user;

    srand(time(NULL));
    
    while (1) {
        computer = rand() % 3;

        printf("Welcome to the ROCK-PAPER-SCISSOR game\n");
        printf("EXIT: -1, ROCK: 0, PAPER: 1, SCISSORS: 2\n");
        printf("Enter an integer for your choice: ");
        scanf("%d", &user);
        if (user == EXIT) {
            break;
        } else if (user < ROCK || user > SCISSORS)
        {
            printf("Invalid choice. You must enter one of the above intefers \n\n");
            continue;
        }
        printf("you picked ");
        if (user == ROCK){
            printf("ROCK \n");
        } else if (user == PAPER){
        printf("PAPER \n");
    } else if (user == SCISSORS)
    {
        printf("SCISSORS \n");
    }
    printf("Computer picked ");
    if (computer == ROCK)
        printf("ROCK \n");
    else if (computer == PAPER)
        printf("PAPER \n");
    else if (computer == SCISSORS)
        printf("SCISSORS \n");
        if (computer == user) {
            printf("It's a DRAW\n\n");
        } else if ((computer == ROCK && user == PAPER)
            || (computer == PAPER && user == SCISSORS)
            || (computer == SCISSORS && user == ROCK))   {
                printf("You WON\n\n");
        } else {
            printf("You LOST\n\n");
        }
    
    }
    printf("Program exits. Goodbye!!!\n");
    return 0;
}
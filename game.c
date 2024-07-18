#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int playerChoice, computerChoice, rounds, playerScore = 0, computerScore = 0;
    srand(time(0));
    printf("Enter the number of rounds you want to play: ");
    scanf("%d", &rounds);
    for (int i = 1; i <= rounds; i++) 
    {
        printf("\nRound %d: Enter your choice (1. Rock, 2. Paper, 3. Scissors): ", i);
        scanf("%d", &playerChoice);
        computerChoice = rand() % 3 + 1;
        switch(computerChoice) 
        {
            case 1:
                printf("Computer chose Rock.\n");
                break;
            case 2:
                printf("Computer chose Paper.\n");
                break;
            case 3:
                printf("Computer chose Scissors.\n");
                break;
        }
         if(playerChoice == computerChoice) 
        {
            printf("It's a tie!\n");
        }
         else if((playerChoice == 1 && computerChoice == 3) ||
                  (playerChoice == 2 && computerChoice == 1) ||
                  (playerChoice == 3 && computerChoice == 2)) 
        {
            printf("You win this round!\n");
            playerScore++;
        } 
         else 
        {
            printf("Computer wins this round!\n");
            computerScore++;
        }
    }
    printf("\nGame Over!\n");
    printf("Your Score: %d\nComputer's Score: %d\n", playerScore, computerScore);
    if(playerScore > computerScore) 
    {
        printf("Congratulations, you won the game!\n");
    } else if(playerScore < computerScore) 
    {
        printf("Computer wins the game. Better luck next time!\n");
    } else 
    {
        printf("It's a tie game!\n");
    }
    return 0;
}
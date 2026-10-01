#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()

{
    char playAgain;
    int bestScore=0;
    do
        {
    int number,guess,attempts=0;
    int won=0;        
    int difficulty,maxNumber,maxAttempts;
    int score;
    printf("=====NUMBER GUESSING GAME=====\n");
    printf("\nChoose difficulty;\n");
    printf("1. Easy     (1-50, 10 attempts)\n");
    printf("2. Medium   (1-100, 8 attempts)\n");
    printf("3. Hard     (1-500, 6 attempts)\n");
    printf("\n Enter your choice: ");
    scanf("%d",&difficulty);

    if(difficulty==1)
    {
        maxNumber=50;
        maxAttempts=10;
    }
    else if(difficulty==2)
    {
        maxNumber=100;
        maxAttempts=8;
    }
    else if(difficulty==3)
    {
        maxNumber=500;
        maxAttempts=6;
    }
    else
    {
        printf("Invalid choice!\n");
        return 0;
    }
    srand(time(0));
    number=rand()%maxNumber+1;

    printf("\nGuess the number between 1 and %d\n",maxNumber);
    
    while(attempts<maxAttempts)
        {
            printf("Enter your guess: ");
            scanf("%d",&guess);
            attempts++;
            if(guess>number)
            {
                printf("Too high!\n");
            }
            else if(guess<number)
            {
                printf("Too low!\n");
            }
            else
            {
                score=(maxAttempts-attempts+1)*10;
                printf("\nCorrect! You got it in %d attempts.\n",attempts);
                printf("Your score: %d\n",score);
                if(score>bestScore)
                {
                    bestScore=score;
                }
                won=1;
                break;
                
            }
            printf("Attempts remaining: %d\n",maxAttempts-attempts);
        }
            if (won==0)
            {
              printf("\nGame over!\n");
              printf("The correct number was %d.\n",number);
            }
            printf("Best score: %d\n",bestScore);
    printf("\nDo you want to play again?(y/n):");
    scanf(" %c",&playAgain);
        }
        while(playAgain=='y'|| playAgain=='Y');
    return 0;
             
        }

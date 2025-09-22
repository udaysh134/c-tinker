#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void wlcmMsg ();


int main () {
    srand(time(NULL));
    int guessedNum, randomGenerated, guesses = 0;

    randomGenerated = rand() % 100 + 1;

    wlcmMsg();
    printf("Guess the number : ");
    scanf("%d", &guessedNum);

    do {
        if (guessedNum < randomGenerated) {
            guesses++;
            printf("Wrong | Guess a little higher : ");
            scanf("%d", &guessedNum);
        }
        
        if (guessedNum > randomGenerated) {
            guesses++;
            printf("Wrong | Guess a little lower : ");
            scanf("%d", &guessedNum);
        }
        
        if (guessedNum == randomGenerated) {
            system("cls");

            guesses++;
            printf("Right | You guessed it (%d) and defeated me in %d guesses.", randomGenerated, guesses);
            printf("\n\nThanks for playing the Game!!\nHope you enjoyed!! See yo again!!");
        }
    } while (guessedNum != randomGenerated);
}


void wlcmMsg () {
    system("cls");
    printf("Welcome to the NUMBER GUESSING GAME\n========================================");
    Sleep(2000);

    printf("\nYou'll be given unlimited time and choice to guess a number from 0 to 100 and finish the game. Simple & Fun!!");
    Sleep(3000);

    printf("\nSo... Are you ready??");
    Sleep(1000);
    printf("\nPress enter when you are...");

    getchar();

    printf("\nOkay!!");
    Sleep(500);

    printf("\n3");
    Sleep(500);
    printf("\n2");
    Sleep(500);
    printf("\n1");
    Sleep(300);
    system("cls");
}
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>

void welcomeInput ();
void getPlayers();


int main () {
    srand(time(NULL));
    welcomeInput();

    int randomGenerated = rand() % 100 + 1;
    int guesses = 0;
    int guessedNum;

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


void welcomeInput () {
    char lineBreakThick[50] = "========================================";
    char lineBreakThin[50] = "----------------------------------------";

    system("cls");
    printf("Welcome to the NUMBER GUESSING GAME\n%s", lineBreakThick);
    Sleep(2000);

    printf("\n> Player(s) will be given unlimited time to guess a number from 1 to 100 and finish the game. Simple & Fun!!");
    Sleep(4000);
    printf("\n> If multiplayers, the one who guessed the number in least amount of guesses, will win the game.");
    Sleep(4000);

    printf("\n%s", lineBreakThin);
    printf("\n> So... Are you ready??");
    Sleep(1000);

    getPlayers();
    Sleep(3000);

    printf("\n%s", lineBreakThin);
    printf("\nOkay, let's start!!");
    Sleep(500);

    printf("\n3");
    Sleep(500);
    printf("\n2");
    Sleep(500);
    printf("\n1");
    Sleep(300);
    system("cls");
}


struct players {
    int number;
    char name[20];
};

void getPlayers() {
    char lineBreakThick[50] = "========================================";
    char lineBreakThin[50] = "----------------------------------------";

    int players;
    char namingChoice;
    char nameOfPlayer[20];

    askNoOfPlayers:
    printf("\n> Enter the number of players... ");
    scanf("%d", &players);

    if(players == 0 || players < 0) {
        printf("Please provide a valid value. The game cannot begin if there's no one to play!");
        goto askNoOfPlayers;
    } else if (players > 10) {
        printf("Sorry! You cannot have players more than 10. Please choose a lower number.");
        goto askNoOfPlayers;
    } else if (players < 11 && players > 0) {
        for (int i = 1; i < (players + 1); i++) {
            struct players pl[10];

            askNameOfPlayers:

            printf("\nWould you like to name Player_%d? (Y/N) : ", i);
            scanf(" %c", &namingChoice);

            switch (tolower(namingChoice)) {
                case 'y':
                        printf("Give a name to Player_%d : ", i);
                        getchar();
                        fgets(nameOfPlayer, sizeof(nameOfPlayer), stdin);
                        printf("%s\nOkay, the name of Player_%d will be - %s", lineBreakThin, i, nameOfPlayer);

                        pl[i-1].number = i;
                        strcpy(pl[i-1].name, nameOfPlayer);
                    break;
                case 'n':
                        printf("%s\nOkay, the name of the Player_%d will be - Player_%d",lineBreakThin, i, i);
                    break;
                default:
                        printf("Oops! You didn't gave a valid input. Please try again, only use Y or N!");
                        goto askNameOfPlayers;
                    break;
            }
        }        
    } else {
        printf("Oops!! An error occured, you gave an invalid input.");
    }
}
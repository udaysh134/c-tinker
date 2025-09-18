#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void wlcmMsg () {
    system("cls");
    printf("Welcome to the NUMBER GUESSING GAME\n========================================");
    Sleep(1000*2);

    printf("\nYou'll be given unlimited time and choice to guess a number from 0 to 100 and finish the game. Simple & Fun!!");
    Sleep(1000*3);

    printf("\nSo... Ae you ready??");
    Sleep(1000*1);
    printf("\nPress enter when you are...");

    getchar();

    printf("\nOkay!!");
    Sleep(1000*0.5);

    printf("\n3");
    Sleep(1000*0.5);
    printf("\n2");
    Sleep(1000*0.5);
    printf("\n1");
    Sleep(1000*0.3);
    system("cls");
}


int main () {
    srand(time(NULL));
    int guessedNum, randomGenerated;

    randomGenerated = rand() % 100 + 1;
    printf("%d", randomGenerated);

    wlcmMsg();
    printf("Guess the number : ");
    scanf("%d", &guessedNum);
}
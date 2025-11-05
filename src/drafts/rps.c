/**
 * -----------------------------------------------------------------------------
 * Program : rps.c
 * Purpose : Play a game of Rock / Paper / Scissors with custom difficulty
 * Authors : [Yazdaan, Uday]
 * Date : Nov 05, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>


int main(void) {
    setlocale(LC_ALL, ""); // Optional for extended characters
    srand(time(0)); // Seed random generator

    char *aich[3] = {"Rock", "Paper", "Scissors"};
    char player;
    int Upts = 0, Cpts = 0, computer, rounds, i;

    // ------=>> | GAME HEADER | <<=------
    printf("\n==================================================\n");
    printf("\t\t ROCK, PAPER, SCISSORS GAME\n");
    printf("==================================================\n\n");

    printf(">>> Enter the number of rounds you want to play: ");
    scanf("%d", &rounds);


    // ------=>> | LOOP STARTS HERE | <<=------
    for (i = 0; i < rounds; i++) {
        printf("\n********** ROUND %d **********\n", i + 1);
        printf(">> Choose your move (r for Rock, p for Paper, s for Scissors): ");
        scanf(" %c", &player);

        computer = rand() % 3; // Randomly selects 0, 1, or 2

        printf(">>> You chose: ");

        if (tolower(player) == 'r') {
            printf("Rock\n");
        } else if (tolower(player) == 'p') {
            printf("Paper\n");
        } else if (tolower(player) == 's') {
            printf("Scissors\n");
        }

        printf(">>> Computer chose: %s\n", aich[computer]);

        // Win / Loss / Tie conditions
        if (((tolower(player) == 'r') && computer == 2) || ((tolower(player) == 'p') && computer == 0) || ((tolower(player) == 's') && computer == 1)) {
            printf("\n*** You win this round! ***\n");
            Upts++;
        } else if (((tolower(player) == 'r') && computer == 1) ||   ((tolower(player) == 'p') && computer == 2) || ((tolower(player) == 's') && computer == 0)) {
            printf("\n*** Computer wins this round! ***\n");
            Cpts++;
        } else if (((tolower(player) == 'r') && computer == 0) || ((tolower(player) == 'p') && computer == 1) || ((tolower(player) == 's') && computer == 2)) {
            printf("\n*** This round is a tie! ***\n");
        } else {
            printf("\n*** Invalid input! Round will be repeated. ***\n");
            i--; // Repeat the round
            continue;
        }

        // Display current score
        printf("\n>>> Current Score: You: %d  |  Computer: %d\n", Upts, Cpts);
        printf("===========================================\n");
    }


    // ------=>> | FINAL RESULT | <<=------
    printf("\n==================================================\n");
    if (Upts > Cpts) {
        printf("\t\t*** CONGRATULATIONS! YOU WON THE GAME! ***\n");
    } else if (Cpts > Upts) {
        printf("\t\t*** COMPUTER WINS! BETTER LUCK NEXT TIME! ***\n");
    } else {
        printf("\t\t*** THE GAME IS A TIE! ***\n");
    }
    
    printf("\t\tFinal Score: You: %d  |  Computer: %d\n", Upts, Cpts);
    printf("==================================================\n\n");

    return 0;
}
// main.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* determineWinner(char player1[], char player2[]) {
    // Convert player inputs
    for (int i = 0; player1[i]; i++)
        player1[i] = tolower(player1[i]);
    for (int i = 0; player2[i]; i++)
        player2[i] = tolower(player2[i]);

    // Check for invalid input
    if (strcmp(player1, "rock") != 0 && strcmp(player1, "paper") != 0 && strcmp(player1, "scissors") != 0)
        return "Invalid";
    if (strcmp(player2, "rock") != 0 && strcmp(player2, "paper") != 0 && strcmp(player2, "scissors") != 0)
        return "Invalid";

    // Determine the winner
    if (strcmp(player1, player2) == 0)
        return "Draw";
    else if ((strcmp(player1, "rock") == 0 && strcmp(player2, "scissors") == 0) ||
             (strcmp(player1, "scissors") == 0 && strcmp(player2, "paper") == 0) ||
             (strcmp(player1, "paper") == 0 && strcmp(player2, "rock") == 0))
        return "Player1";
    else
        return "Player2";
}

int main() {
    char player1[] = "Rock";
    char player2[] = "Scissors";

    char* result = determineWinner(player1, player2);

    printf("Winner: %s\n", result);

    return 0;
}

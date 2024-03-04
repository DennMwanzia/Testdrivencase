
#include <stdio.h>
#include <assert.h>
#include "rps.h" 

void test_determineWinner() {

    assert(strcmp(determineWinner("Rock", "Scissors"), "Player1") == 0);


    assert(strcmp(determineWinner("Scissors", "Rock"), "Player2") == 0);

    
    assert(strcmp(determineWinner("Paper", "Paper"), "Draw") == 0);

    
    assert(strcmp(determineWinner("Spock", "Lizard"), "Invalid") == 0);
}

int main() {
    test_determineWinner();
    printf("All tests passed!\n");
    return 0;
}

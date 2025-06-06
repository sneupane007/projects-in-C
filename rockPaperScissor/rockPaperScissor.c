# include <stdio.h>
#include <stdbool.h>
# include <stdlib.h>

int generateRandomHand(){
    int var = rand() % 4;
    printf("%d\n", var);
    return var;
}

void userWins(){
    printf("Yay! you win");
}

void computerWins(){
    printf("Womp Womp Sorry!!");
}
int printResult(int user, int computer){
    if (user > computer){
        userWins();

    }
    else if(user == computer){
        printf("Its a draw");
    }
    else{
        computerWins();
    }
    return 0; 
}

int main(){
    bool condition = true;
    int userEntry;
    while (condition){
        printf(" Select the desired number \n");
        printf(" Rock    : 1\n" );
        printf(" Paper   : 2\n");
        printf(" Scissor : 3\n");
        scanf("%d", &userEntry); 
        if (userEntry <= 3 && userEntry >= 1){
            condition = false;
        }
    }
    
    int computerEntry = generateRandomHand();

    printResult(userEntry, computerEntry);

    return 0;
}
#include <stdio.h>

int main(){
    int x = 0;
    int y = 69;

    while (x != y ){
        printf ("Guess number from 1-100: ");

        if (scanf("%d", &x) !=1){
            printf("It's guessing number you stupid!\n");
            while (getchar() != '\n');
            continue;
        }

        if (x == y ){
            printf("Finally you got it right, you idiot!\n");
        }
            else{
                printf("Idiot! Try again.\n");
            }
        }
    return 0;
}
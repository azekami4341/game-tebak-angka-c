#include <stdio.h>

int main(){
    int x = 0;
    int y = 69;

    while (x != y ){
        printf ("Tebak Angka 1-100: ");

        if (scanf("%d", &x) !=1){
            printf("Tebak Angka Tolol!\n");
            while (getchar() != '\n');
            continue;
        }

        if (x == y ){
            printf("Akhirnya Bener Tolol!\n");
        }
            else{
                printf("Tolol! Coba lagi.\n");
            }
        }
    return 0;
}
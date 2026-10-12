#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);
    switch(k){
        case 1: 
            printf("Alas! Farha is bitten by snake. She is now at 75.");
            break;
        case 2: 
            printf("Nothing happened to her.");
            break;
        case 3: 
            printf("Nothing happened to her.");
            break;
        case 4: 
            printf("Alas! Farha is bitten by snake. She is now at 79.");
            break;
        case 5: 
            printf("Farha is on ladder.");
            break;
        case 6:
            printf("Yay! Farha has won the game. She is now at 100.");
            break;
     }
    
    return 0;
}
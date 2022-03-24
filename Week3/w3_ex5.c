#include<stdio.h>

int main() {
    int row, val;
    int num;
    
    printf("Enter an integer between 1 and 15: ");
    scanf("%d", &num);
    if ( num <= 15 && num >= 1) {
        for(row = num; row >= 1; row --){
        // for ech row print the first sequnce 
            for (val = row; val >= 1; val--){
                printf("%2d", val);
            }
            for (val = 2; val <= row; val++){
                printf("%2d", val);
            }
            printf("\n");
        }
    }   
    else {
        printf("Invalid number! Try again \n");
        main();
    }
    return 0;
}
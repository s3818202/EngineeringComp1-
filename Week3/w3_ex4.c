#include<stdio.h>

int main(){
    //print out first line
    printf(" x | ");
    for (int col = 1; col <= 10; col++ ){
        printf(" %2d ", col);
    }
    printf("\n");

    //Print out the 2nd line will ----
    for (int col = 1; col <= 11; col++){
        printf("----");
    }
    printf("\n");
    //Print out the remaining part

    for(int row = 1; row <= 10; row++){
        // for each row
        printf("%2d | ", row);
        for (int col =1; col <= 10; col++){
            printf("%3d ", col*row);
        }

        printf("\n");
    }

    return 0;
}
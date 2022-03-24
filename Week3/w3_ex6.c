#include<stdio.h>

int main() {
    int num;
    do {
        printf("Enter an interger between 1 and 15: ");
        scanf("%d", &num);
    }while ( num < 1 || num > 15);

    for (int row = 1; row <= num; row++){
        // for each row
        for (int block =1; block <= num - row; block ++){
            printf("   ");
        }
        for (int col = row; col >= 1; col--){
            printf("%2d ", col);
        }

        for (int col =2; col <= row; col++){
            printf("%2d ", col);
        }
        printf("\n");
    }
    return 0;
}
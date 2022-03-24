/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2022A
  Lab Assessment: 1
  Author: e.g. Nguyen Van Minh
  ID: e.g. 1234567
  Compiler used: e.g. gcc 8.1.0
  Created  date: e.g. 21/03/2022
  Acknowledgement: List the resources that you use to complete this assessment (write 'None' if you don't use any).
*/


#include <stdio.h>

int main(void) {
    int num;

    //Get valid number
    while (1) {
        printf("Enter a number (1 - 10): ");
        scanf("%d", &num);

        if (num < 1 || num > 10) {
            printf("Invalid Number\n");
        } else {
            break;
        }
    } 

    //Print out pattern
    for (int row = 1; row <= num; row++) {
        /* for each row */
        //Print out numbers in descending order 
        for (int val = row; val >= 1; val--) {
            printf("%2d  ", val);
        }

        //print out extra pattern in some cases  
        if (row == 1) {  //on first row
            for (int val = 2; val <= num; val++) {
                printf("%2d  ", val);
            }
        } else if (2 <= row && row <= num - 1) { //for the end of each column
            //print blocks of whitespaces
            for (int block = 1; block <= num - 1 - row; block++) {
                printf("    ");
            }
            //print the last number
            printf("%2d  ", num + 1 - row);
        }

        printf("\n"); //end of the row
    }

    return 0;
}
/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2022A
  Lab Assessment: 1
  Author: e.g. Nguyen Van Minh
  ID: e.g. 1234567
  Compiler used: e.g. gcc 8.1.0
  Created  date: e.g. 21/03/2022
  Acknowledgement: https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    const int SIZE = 20; 
    int rand_arr[SIZE];  //define the array

    srand(time(NULL)); //initialize the random generator

    //Assign random values for array elements
    printf("\nAll elements in the array: \n");
    for (int i = 0; i < SIZE; i++) {
        rand_arr[i] = rand() % 101;   //value range: 0 --> 100
        printf("%d ", rand_arr[i]);
    }

    printf("\n\nAll elements from 50 to 100: \n");

    //Print out all elements from 50 to 100, and also count
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (rand_arr[i] >= 50 ) {
            printf("%d ", rand_arr[i]);
            count ++;
        }
    }
    printf("\nThere are %d elements sastified the condition \n", count);

    return 0;
}
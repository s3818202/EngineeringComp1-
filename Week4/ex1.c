#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(){
    int arr[SIZE];

    //Initialize the random generator
    srand(time(NULL));

    //Qa: Create random values (50-100) for array
    for (int i = 0; i < SIZE; i++) {
        arr[i] = ( rand() % 51 )    + 50;   //50 - 100
        //(rand() % (B - A + 1) )   +  (A); 
    }

    //Qb: print out values from first to last
    printf("\nValues from first to last: \n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    } 
    printf("\n");

    //Qc: print out values from last to first
    printf("\nValues from last to first: \n");
    for (int i = SIZE-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    } 
    printf("\n");

    //Qd: Check for elements greater than 80
    printf("\nValues larger than 80: \n");
    int cnt = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > 80) {
            printf("%d ", arr[i]);
            cnt++;
        }
    } 
    printf("\nThere are %d numbers in that range \n\n", cnt);

    //Qe: Smallest element
    int smallest = arr[0];
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("\nThe smallest value is %d \n", smallest);

      
      



    return 0;
}
#include <stdio.h>
#define SIZE 5

int main() {

    //Qa: Create array
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        printf("Enter number for element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    //Qb: Selection sort
    for (int i = 0; i < SIZE; i++) {
        /* Find the largest element of the 
        remaing part at swapt to index i*/
        for (int j = i + 1; j < SIZE; j++) {
            //First the largest element
            if (arr[j] > arr[i]) {
                printf("\n Swap %d and %d \n", arr[i], arr[j]);
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    printf("\nSORTED ARRAY: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }



    return 0;
}
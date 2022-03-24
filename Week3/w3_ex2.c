/*
Get a sequence of positive integers from the user and compute their sum. The sequence
ends when the user enters a negative number. The sum should not include the negative
number at the end of the sequence. How many positive numbers are there in the
sequence?
Here is a sample run of the program.

*/

#include<stdio.h>

int main() {
    int cnt;
    cnt = 1;
    int sum;
    int num;
    int count = 0;
    for (int i = 0; i <= 3; i++) 
    {
        printf("Enter a positive integer: ");
        scanf("%d", &num);
        if (num > 0){
            sum += num;
            ++count;
        }

    }
    printf("Sum is %d \n", sum);
    printf("There are %d positive integers", count);

    return 0;
}
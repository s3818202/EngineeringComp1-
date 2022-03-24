#include<stdio.h>

/* Get a final result of a course as a float between 0 and 100 inclusively, then print the final grade for that course based on the below table. If the user enters a final result smaller 0 or greater than 100, print an error message and keep on asking the user to re-enter again until the final result is eventually between 0 and 100.

Final result          Final grade
result < 50               NN
50 <= result < 60         PA
60 <= result < 70         CR
70 <= result < 80         DI
result >= 80              HD   */

int main(){
    // input 
    float result;

    printf("Enter your grades to get the final result: ");
    scanf("%f"  , &result);
    
    if( 0 < result && result < 100){
        if ( result <50){
            printf("Your final result is NN!!!");
        }
        else if (50 <= result && result < 60){
            printf("Your final result is PA!!!");
        }
        else if (60 <= result && result < 70){
            printf("Your final result is CR!!!");
        }
        else if (70 <= result && result < 80){
            printf("Your final result is DI!!!");
        }
        else {
            printf("Your final result is HD!!!");
        }
    } else {
        printf("Your enter a wrong result please intput again!!!\n");
        main();

    }

    return 0;
}
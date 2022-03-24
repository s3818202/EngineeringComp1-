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

int main() {
    char ch;
    printf("Enter an alphanumerical  character: ");
    scanf("%c", &ch);

    //Checking character
    if (ch >= '0' && ch <= '9') { //digit 
        printf("It is a Number ! \n");
    } else  if (ch >= 'a' && ch <= 'z') { //lowercase alphabets
        printf("It is a lowercase alphabetical character \n");
        printf("> Converted character: %c \n",  ch - 'a' + 'A');
    } else if (ch >= 'A' && ch <= 'Z') { //uppercase alphabets
        printf("It is an UPPERCASE alphabetical character \n");
        printf("> Converted character: %c \n",  ch - 'A' + 'a');
    } else {
        printf("INVALID chacter \n");
    }

    return 0;
}
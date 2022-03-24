#include<stdio.h>

int main(){
    int  lineCount = 0;
    for (char ch = '!'; ch <= '~'; ch++){
        printf("%c ", ch);
        // print new line after each 15 character
        lineCount ++;
        if (lineCount %15 == 0){
            printf("\n");
        }
    }
    return 0;
}
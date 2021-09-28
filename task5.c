/**
     * create char array and see if strcpy will overflow to next variable's memory address
     * 
     * Ben Raivel
     * 9/23/21
     */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // create char array
    char test[5];

    // add check character after
    char check = 0;

    // strcpy slightly too long string
    strcpy(test, "abcdef");

    // orint result
    if(check == 0){
        printf("safe");
    }
    else{
        printf("hacked");
    }

    return 0;
}
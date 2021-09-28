/**
         * create multiple variables and read continuously from memory
         *
         * Ben Raivel
         * 9/22/21 
         */

#include <stdio.h>
#include <stdlib.h>

int main(){
    long bing = -1;
    float bang = 3.34321;
    double bong = 2222220;
    unsigned char *ptr;

    ptr = (unsigned char *)&ptr;

    for(int i=0; 1; i++) {
        printf("%d: %02X\n", i, ptr[i]);
    }

    return 0;
}
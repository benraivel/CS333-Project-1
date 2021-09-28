/**
     * create struct and examine memory structure of struct
     * 
     * Ben Raivel
     * 9/23/21
     */

#include <stdio.h>
#include <stdlib.h>

// define struct
struct stuff{
    char thing[3];
    short item;
    char object;
};


int main(){
    unsigned char *ptr;

    // create struct assign values
    struct stuff stuff1;
    stuff1.thing[0] = 'a';
    stuff1.item = 8;
    stuff1.object = 'z';

    printf("sizeof struct: %lu\n", sizeof(stuff1));

    ptr = (unsigned char *)&stuff1;

    for(int i=0; i < 10; i++) {
        printf("%d: %02X\n", i, ptr[i]);
    }

    return 0;
}
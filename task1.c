/**
         * memory access program examine how each type is stored
         *
         * Ben Raivel
         * 9/22/21 
         */

#include <stdio.h>
#include <stdlib.h>
        
/** Creates variables of type: (char, short, int, long, float, double)
    * use unsigned char to loop through and printf() contents of variable
    */ 

int main () {
		
// declare and assign variables of each type						
    char donkeykong = 'a';
    short diddykong = 10;
    int dixiekong = 1234;
    long funkykong = -228;
    float crankykong = 7.37465;
    double lankykong = 3.3e-4;

// create unsigned char
    unsigned char *ptr;

    // examine contents of donkeykong
    printf("Elements of donkeykong:\n");
    ptr = (unsigned char *)&donkeykong;
    for(int i=0; i<sizeof(donkeykong); i++){
        printf("Byte %d : %02X\n", i, ptr[i]);
    }

    // examine contents of diddykong
    printf("\nElements of diddykong:\n");
    ptr = (unsigned char *)&diddykong;
    for(int i=0; i<sizeof(diddykong); i++){
        printf("Byte %d : %02X\n", i, ptr[i]);
    }

   
    // examine contents of dixiekong
    printf("\nElements of dixiekong:\n");
    ptr = (unsigned char *)&dixiekong;
    for(int i=0; i<sizeof(dixiekong); i++){
        printf("Byte %d : %02X\n", i, ptr[i]);
    }

    
    // examine contents of funkykong
    printf("\nElements of funkykong:\n");
    ptr = (unsigned char *)&funkykong;
    for(int i=0; i<sizeof(funkykong); i++){
        printf("Byte %d : %02X\n", i, ptr[i]);
    }

    // examine contents of crankykong
    printf("\nElements of crankykong:\n");
    ptr = (unsigned char *)&crankykong;
    for(int i=0; i<sizeof(crankykong); i++){
        printf("Byte %d : %02X\n", i, ptr[i]);
    }

   // examine contents of lankykong
    printf("\nElements of lankykong:\n");
    ptr = (unsigned char *)&lankykong;
    for(int i=0; i<sizeof(lankykong); i++){
        printf("Byte %d : %02X\n", i, ptr[i]);
    }

    return 0;
}  
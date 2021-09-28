/**
     * repeatedly allocate small amounts of memory to a single variable
     * 
     * Ben Raivel
     * 9/23/21
     */

#include <stdio.h>
#include <stdlib.h>

// declare unsigned char (1 byte) pointer to 
unsigned char* ptr;

int main(){
    // take user input to determine whether to call free()
    printf("enter '1' to enable free() otherwise enter a different char:\n");
    int usrin = getchar();

    // repeatedly allocate memory
    for(int i = 0; 1; i++){
        ptr = (unsigned char*)malloc(sizeof(ptr));
        if(usrin){
            free(ptr);
        }
    }
    return 0;
}
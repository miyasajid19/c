/*Find various problems that can be solved using recursion and which one
is your favorite?*/
#include <stdio.h>

int main() {
    int num = 10;
    
    /*
    %u: This is used for unsigned integer output. When used to print the address of a variable, it treats the address as an unsigned integer and prints it in decimal format.
    */
    printf("Address using %%u: %u\n", &num);
    
    // %p: This is used to print pointers. It expects the argument to be of type void*. When used to print the address of a variable, it prints the address in hexadecimal format, which is a common way to represent memory addresses.
    printf("Address using %%p: %p\n", (void *)&num);
    
    //%x: This is used for hexadecimal output. When used to print the address of a variable, it treats the address as an unsigned integer and prints it in hexadecimal format.
    printf("Address using %%x: %x\n", &num);
    
    return 0;
}

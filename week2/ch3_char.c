/*
Test of chars in C
*/

#include <stdio.h>

int main(void) {
    char c = 'A';
    printf("c in ASCII is %d \n", c);
    printf("c the char is %c \n", c);
    printf("three consecutive chars are %c, %c, %c \n", c, c+1, c+2);
    printf("three bells %c%c%c \n", '\a', '\a', '\a');
    return 0;
}
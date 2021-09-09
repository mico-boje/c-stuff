#include <stdio.h>

/*
requires a redirected file, e.g:
./bin/scan_file.exe < Phrack#7 
*/

int main(void) {
    int blanks = 0, digits = 0, letters = 0, others = 0;
    int c; // used for int value of character
    while ((c = getchar()) != EOF){
        if (c == ' ')
            ++blanks;
        else if (c >= '0' && c <= '9')
            ++digits;
        else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            ++letters;
        else 
            ++others;
    }
    printf("blanks: %d, digits: %d, letters: %d, others: %d \n", blanks, digits, letters, others);
    return 0;
}
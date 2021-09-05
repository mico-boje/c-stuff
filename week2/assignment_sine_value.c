// Write a program that can give the sine of a value between 0 and 1 (non inclusive). 

#include <stdio.h>
#include <math.h>

int main(void) {
    double input_value;
    printf("Input value between 0 and 1: ");
    scanf("%lf", &input_value);
    double sin_value = sin(input_value);
    if (input_value > 0 && input_value < 1)
    {
        printf("\n Sin of %lf is: %lf \n", input_value, sin_value);
    }
    else {
        printf("\n Please input a value between 0 and 1 \n");
    }
    return 0;
}
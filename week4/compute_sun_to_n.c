#include <stdio.h>
#include <stdlib.h>

int compute_sum_to_n(int n)
{
    int sum = 0;
    for(; n>0; n--){
        sum += n;
    }
    return sum;
}

int main(void)
{
    int input_n;
    printf("Input value of n (where n is a positive value): ");
    scanf("%d", &input_n);
    printf("\n value of N is: %d", input_n);
    printf("\n Sum to n is: %d \n", compute_sum_to_n(abs(input_n)));
    return 0;
}
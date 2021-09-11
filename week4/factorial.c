#include<stdio.h>

long int factorial(int n)
{
    if (n==1)
        return 1;
    else 
        return(factorial(n-1)*n);
}

int main(void)
{
    int count = 0, i;
    printf("Computing factorial table up to n, where n is: ");
    scanf("%d", &count);
    printf("\n Factorials \n");

    for(i = 1; i <= count; i++)
        printf("\n %d: \t %ld", i, factorial(i));
    printf("\n\n");
    return 0;
}
#include<stdio.h>

double square(double);

int main(void)
{
    int how_many = 0, i, j;
    printf("Square of cube from 1 to n, where n is: ");
    scanf("%d", &how_many);
    printf("\n square by interval of .1\n");

    for (i = 1; i < how_many; i++){
        for (j = 0; j <= 10; j++){
            printf("\n %lf \t %lf",
                i+(j/10.0), square(i+(j/10.0)));
        }
    }
    printf("\n\n");
    return 0;
}

double square(double x)
{
    return (x * x);
}
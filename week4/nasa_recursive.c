#include<stdio.h>

void recursive_count_down(int n)
{
    if(n==0)
    printf("Blast off\n");
    else
    {
        printf("countdown: %d \n", n);
        recursive_count_down(n-1);
    }
}

int main(void)
{
    int n = 20;
    recursive_count_down(n);
    return 0;
}
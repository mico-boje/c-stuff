#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
    int i, j, n, p;
    i = 1; j = 2;  

    printf("i: %d \n", i);
    printf("j: %d \n", j);
    n = (i == j)? 4:(i < j)?3:5;
    n = (i < j)? 4: 6; 
    p = (i, j);  
    printf("n: %d", n);
return 0;
}
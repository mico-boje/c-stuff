#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
#include<stdlib.h>

int main(void)
{ 
double interval;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10.0;
 printf("Interval: %f\n", interval);
 printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
}

printf("\n+++++++\n");
return 0;
}
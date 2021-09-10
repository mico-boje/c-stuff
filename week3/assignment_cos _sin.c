#include <math.h>
#include <stdio.h>

int main(void)
{
	for (double x = 0.0; x <= 1.0; x += 0.1) {
		printf("sin(%f)=%f \t cos(%f)=%f\n", x, sin(x), x, cos(x));
    }

    return 0;
}

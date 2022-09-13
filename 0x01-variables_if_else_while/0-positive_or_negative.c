#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers will go there */

/**
* function main - print the numbers if positive, zero, or negative
* return 0: always (success)
*/
int main(void)
{
	int n;
	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

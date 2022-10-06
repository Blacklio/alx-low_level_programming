#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - print the numbers if positive, zero, or negetive
* Return 0: Always (Success)
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

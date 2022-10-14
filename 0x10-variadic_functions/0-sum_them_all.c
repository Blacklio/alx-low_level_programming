#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - sum of all its parameters
* @n: total number of parameters
* Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}

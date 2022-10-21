#include <stdio.h>
/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int a, i, k, j;

	for (a = 48; a <= 57; a++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (((k + j) > (a + i) &&  k >= a) || a < k)
					{
						putchar(a);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);
					if (a + i + k + j == 227 && a == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

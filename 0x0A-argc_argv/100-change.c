#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
/**
 * coinConverter - Helper function that does all the mathematics.
 * i: Passed in variable from main for calculations.
 * Return: The number of coins needed minimum for the passed in variable.
 * main - Takes in exactly one argument for minimum coin count.
 * @argc: Number of command line arguments.
 * @argv: Array name.
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, leastcents = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};
	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			leastcents += money / cents[i];
			money = money % cents[i];
			if (money % cents[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

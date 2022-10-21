#include "main.h"
#include <stdio.h>
/**
 * _strlen - the length of a string
 * @s: is a pointer int char type
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int u;

	for (u = 0; *s != '\0'; u++)
	{
		s++;
	}
	return (u);
}

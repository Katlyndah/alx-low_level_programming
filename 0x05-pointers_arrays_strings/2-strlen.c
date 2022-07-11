#include "main.h"
#include <string.h>

/**
 * _strlen -> function that returns the length of a string.
 * @s: string to count
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;
	int c = 0;

	for (; *s != '\0'; s++)
	{
		len += 1;
		c++;
	}

	return (len);
}

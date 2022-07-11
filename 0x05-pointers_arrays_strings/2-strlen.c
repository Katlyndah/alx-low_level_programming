#include "main.h"

/**
 * _strlen -> function that returns the length of a string.
 * @s: string to count
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (*(s + l) != '\0')
	{
		l++;
	}

	return (l);
}

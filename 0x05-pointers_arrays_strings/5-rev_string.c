#include "main.h"

/**
 * rev_string -> function that reverses a string.
 * @s: string to reverse
 *  Return: void
 */
void rev_string(char *s)
{
	char temp;
	int i, j, c;

	i = 0;
	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (j = 0; j < (i - 1); j++)
	{
		for (c = j + 1; c > 0; c--)
		{
			temp = *(s + c);
			*(s + c) = *(s + (c - 1));
			*(s + (c - 1)) = temp;
		}
	}
}

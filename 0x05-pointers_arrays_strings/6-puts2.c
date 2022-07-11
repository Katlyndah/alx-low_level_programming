#include "main.h"
#include <string.h>

/**
 * puts2 -> function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string in question
 */
void puts2(char *str)
{
	int len, j;

	j = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j += 2)
	{
		_putchar(str[j]);
	}
}

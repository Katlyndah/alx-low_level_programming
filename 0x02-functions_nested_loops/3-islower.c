#include "main.h"

/**
 * _islower - Entry point
 * Description: checks if a character is lowercase.
 * @c: character in question
 * Return: (0) failure (1) success
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

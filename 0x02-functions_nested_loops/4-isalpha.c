#include "main.h"

/**
 * _isalpha - Entry point
 * Description: checks for alphabetic character.
 * @c: Character in question
 * Return: (0) failure (1) success
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

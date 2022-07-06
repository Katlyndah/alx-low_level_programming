#include "main.h"

/**
 * _abs - Entry point
 * Description: computes the absolute value of an integer.
 * @n: integer in question
 * Return: absolute value of integer
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

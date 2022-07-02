#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main -> assign a random number to the variable n each time and print
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
	{
		printf("is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("is 0\n");
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("is less than 6 and is not 0\n");
	}
	return (0);
}


#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - shows whether the number is negative, positive or zero
 *
 * Return: Always (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	{printf("%d positive \n", n); }
	else
		(n < 0);
	{printf("%d negative \n", n); }
	return (0);
}

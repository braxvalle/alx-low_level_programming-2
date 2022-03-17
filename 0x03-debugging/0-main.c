#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Gives correct output when given a case of 0
 * positive_or_negative: checks if number is positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}

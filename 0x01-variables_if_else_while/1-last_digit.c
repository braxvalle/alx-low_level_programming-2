#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - Entry point of program
 * Return: always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit;
	lastDigit = n % 10;
	if (lastDigit == 0)
		printf("Last digit of n is %dlastDigit and is 0\n", lastDigit);
	else if (lastDigit > 5)
		printf("Last digit of n is %dlastDigit and is greater than 5\n", lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
		printf("Last digit of n is %dlastDigit and is less than 6 and not 0\n", lastDigit);
	else
	quit;
	return (0);
}

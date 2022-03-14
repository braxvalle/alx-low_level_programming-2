#include <stdio.h>
/**
 * main - Entry point of program
 * Return: always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = 0; digit <= 9; digit++)
	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point of program
 * Return: always 0 (Success)
 */
int main(void)
{
	int j;
	char ch;

	for (j = 0; j <= 9; j++)
		putchar(j);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

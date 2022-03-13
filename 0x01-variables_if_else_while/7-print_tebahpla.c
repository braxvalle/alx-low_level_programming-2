#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar ('\n');
	return (0);
}

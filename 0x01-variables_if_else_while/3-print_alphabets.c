#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
	putchar ('\n');
	putchar(ch);
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point of program
 * Return: always 0 (Success)
 */
int main(void)
{
	char ch;

	for ((ch = 'a'; ch <= 'z'; ch++) && (ch != 'e'; && ch != 'q';))
		putchar(ch);
	putchar ('\n');
	return (0);
}

#include "main.h"
/**
 * _strcat - concetenates 2 strings
 * @dest: represents where the string is joined
 * @src: represents the joiner
 * Return: always 0
 */
char *_strcat(char *dest, char *src);
{
	char dest[] = "Hello";
	char src[] = "World!";
	strcat(dest, src);
	putchar('strcat');
	putchar('\n');
	return (0);
}


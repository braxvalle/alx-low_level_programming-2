#include "main.h"
#include <stdio.h>
#include <string.h>
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
	return (0);
}


#include "main.h"
/**
 * _strcat - concetenates 2 strings
 * @dest: represents where the string is joined
 * @src: represents the joiner
 * Return: always 0
 */
char *_strcat(char *dest, char *src);
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}


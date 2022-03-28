#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory
 * @s: pointer
 * @b: constant byte
 * @n: an unsigned integer
 * Return: returns pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	while (j < n)
	{
		s[j] = b;
	}
	j++;
	Return (*s);
}

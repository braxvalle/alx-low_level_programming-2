#include "main.h"

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

	j = 0;
	while (j < n)
	{
		s[j] = b;
	}
	j++;
	return (*s);
}

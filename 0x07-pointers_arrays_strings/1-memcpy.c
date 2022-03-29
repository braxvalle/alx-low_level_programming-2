#include "main.h"
/**
 * _memcpy - copies the memory area
 * @dest: destination
 * @src: source
 * @n: an unsigned integer value
 * Return: returns destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (*dest);
}

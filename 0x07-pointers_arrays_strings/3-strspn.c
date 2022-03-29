#include "main.h"
/**
 * _strspn - gets length of string
 * @s: string
 * @accept: substring
 * Return: returns length
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

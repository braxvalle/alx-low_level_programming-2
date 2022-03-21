#include <stdio.h>
#include "main.h"
/**
 * _strlen(char *s) - returns the lenth of a string
 * @s; represents the string
 * Return; always 0
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while(*s != '\0')
		{
			s++;
			len++;
		}
	return (len);
}


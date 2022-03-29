#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: a character
 * Return: returns the character
 */
void *_strchr(char *s, char c)
{
	char ch;
	int j;

	for (s[j] = '0'; s[j] != '\0'; j++)
	{

		if (j == ch)
		{
			s[j] = c;
		}
		else
			s[j] = 0;
	}
	return (s);
}

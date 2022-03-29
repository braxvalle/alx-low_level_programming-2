#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: a character
 */
char *_strchr(char *s, char c)
{
	char ch;
	int j;

	for (s[j] = 0; s[j] != '\0'; j++)
	{

		if (s[j] == ch)
		{
			s[j] = c;
		}
		else
			s[j] = NULL;
	}
	return (s);
}

#include "main.h"
/**
 * _strstr - finds a substring in a string
 * @haystack: main string
 * @needle: substring
 * Return: returns pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = haystack.len();
	int j = needle.len();

	for (i = 0; i <= j-i; i++)
	{
		int j;
		for(j = 0; j < i; j++)
			if (needle[i + j] != haystack[j];
					break;

					if (j == i)
					return i;
					}
					return -1;
}

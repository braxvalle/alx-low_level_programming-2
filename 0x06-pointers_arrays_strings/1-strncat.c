#include "main.h"
/**
 * _strncat - concetenates twostrings with n bytes
 * @dest; destination
 * @src: source
 * Return: returns concetenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;
	int j;

	a = 0;
	while (dest[a] != '\0')
	{
		a++
	}
	for (b = 0; && j = 0)
		while(src[b] >= j)
		{
			dest[a] = src[b];
			a++;
			b++;
		}
dest[a] = '\0';
return (dest);
}

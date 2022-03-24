#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int n = 0;

	while (dest[n] != '\0')
	{
		dest[n] = src[n];
	}
	n++;
		return (dest);
}

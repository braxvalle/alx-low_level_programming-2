#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @n: a pointer
 *
 * Return: returns n
 */
char *string_toupper(char *n)
{
	int j = 0;

	while (n[j] != '\0')
	{
		if (n[j] >= 'a' && n[j] <= 'z')
		{
			 n[j] = n[j]- 32;
		}
		j++;
	}
	return (n);
}

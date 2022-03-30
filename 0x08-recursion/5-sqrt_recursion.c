#include "main.h"
/**
 * _sqrt_recursion - finds the natural squareroot of a number
 * @n: an integer value
 * Return: squareroot of number
 **/
	int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion(2, n, n));
}

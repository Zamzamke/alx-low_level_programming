#include <stdio.h>

/*
 * int factorial(int n)- Returns the factorial of given number
 * @n :number to be tested
 * Return: factorial of a number,if n is less than 0,return -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

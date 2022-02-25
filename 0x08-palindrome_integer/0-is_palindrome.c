#include "palindrome.h"

/*
 * is_palindrome:  checks if unsigned integer is a palindrome
 *@n: number to check
 *
 * Return: 1 if n is a palindrome, 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	int reverse = 0, aux = 0, sum = 0;

	aux = n;

	while (n > 0)
	{
		reverse = n % 10;
		sum = (sum * 10) + reverse;
		n = n / 10;
	}

	if (aux == sum)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
int is_prime_helper(int n, int i);
/**
 * is_prime_number - returns 1 if prime number
 * @n: number output
 * Return: 1 if the input integer is prime num, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, n - 1));
}
/**
 * is_prime_helper - helper function
 * @n: integer 1
 * @i: integer 2
 * Return: 1 if the input integer is prime num, 0 otherwise
*/
int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i - 1));
}

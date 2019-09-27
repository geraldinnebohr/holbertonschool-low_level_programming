#include "holberton.h"

/**
 *calc - returns 1 if input is a prime number
 *@n: is an integer
 *@count: is an integer
 *@sum: is an integer
 *Return: -1.
 */

int calc(int n, int count, int sum)
{


	if (sum > 2 || n <= 1)
		return (0);
	/*else*/
	{
		if (n == (count - 1) && sum == 2)
			return (1);
		/*else*/
			if (n % count == 0)
				return (calc(n, count + 1, sum + 1));
			else
				return (calc(n, count + 1, sum));
	}
}



/**
 *is_prime_number - calls another variable
 *@n: is an integer
 *Return: calc
 */
int is_prime_number(int n)
{
	return (calc(n, 1, 0));
}

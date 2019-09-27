#include <stdio.h>

/**
 * main - print numbers from 1 to 100
 * Return: 0 success
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 != 0))
			printf("Fizz ");
		if ((n % 3 != 0) && (n % 5 == 0) && (n != 100))
			printf("Buzz ");
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz ");
		if ((n % 3 != 0) && (n % 5 != 0))
			printf("%d ", n);
		if ((n % 3 != 0) && (n % 5 == 0) && (n == 100))
			printf("Buzz");
	}
	printf("\n");
	return (0);
}

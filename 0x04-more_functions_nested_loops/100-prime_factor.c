#include <stdio.h>
/**
 * main - print the largest prime factor of the numbers 612852475143
 * Return: always 0
 */
int main(void)
{
	int i;
	long int n, d;

	n = 612852475143;
	for (i = i + 1; i <= n; i++)
	{
		if (n % 1 == 0)
		{
			if (n == 1)
			{
				printf("%ld\n", i);
				break;
			}
			d = n / i;
			n = d;
		}
	}
	return (0);
}

#include <stdio.h>
/**
 * main - print 1 - 100 and fizzbuss
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
		printf("fizzbuzz ");
		}
		else if (i % 3 == 0)
		{
		printf("fizz ");
		}
		else if (i % 5 == 0)
		{
		printf("Buzz ");
		}
		else
		{
		printf("%d ", i);
		}

	printf("Buzz");
	printf("\n");
	return (0);
	}
}

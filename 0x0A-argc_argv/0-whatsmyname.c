#include <stdio.h>
/**
 * main - prints its name and a new line
 * @argc: number of command line argument
 * @argv: the array that contains command line
 * Return: (0) when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

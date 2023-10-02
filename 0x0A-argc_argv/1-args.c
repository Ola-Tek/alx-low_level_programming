#include <stdio.h>
/**
 * main - prints the number of argument and line
 * @argc: number of command line
 * @argv: the array of command
 * Return: 0, when successful
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

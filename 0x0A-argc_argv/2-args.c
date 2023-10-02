#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: number of arguments in command line
 * @argv: array of command
 * Return: 0, when successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)", sizeof(char));
printf("Size of an int: %lu byte(s)", sizeof(int));
printf("Size of long int: %lu byte(s)", sizeof(long int));
printf("Size of float: %lu byte(s)", sizeof(float));
printf("Size of long long int: %lu byte(s)", sizeof(long long int));
return (0);
}

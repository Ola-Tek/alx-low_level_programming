#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0 when successful
 */

int main(void)
{
int i;
char g;
for (i = '0'; i <= '9'; i++)
putchar('0' + i);
for (g = 'A'; g <= 'f'; g++)
putchar(g);
putchar('\n');
return (0);
}

#include <stdio.h>

/**
 * main - main
 *
 * Return: always 0 when successful
 */

int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
putchar('0' + i);
if (i != '9')
putchar(',');
putchar(' ');
putchar('\n');
return('0');
}
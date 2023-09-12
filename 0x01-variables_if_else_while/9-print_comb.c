#include <stdio.h>

/**
 * main - main fuction
 *
 * Return: always 0 when successful
 */

int main(void)
{
int i;
int j;
{
for (i = '0'; i <= '9'; i++)
for (j = '0'; j <= '9'; j++)
if (i != '0' || j != '0')
{
putchar(',');
putchar(' ');
}
putchar('0' + i);
putchar('0' + j);
}
return 0;
}

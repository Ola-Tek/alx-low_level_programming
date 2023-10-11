#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function that print name
 * @name: name of the person
 * @f: input pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

#include "function_pointers.h"

/**
 * print_name - fuction name
 * @name: string input
 * @f: function pointer input
 * Print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if(name && f)
		(*f)(name);
}

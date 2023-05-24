#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function name
 * @name: string
 * @f: function pointer
 * Prints name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

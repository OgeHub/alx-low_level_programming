#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
	    printf("Hello, my name is %s\n", name);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	 print_name("Bob", print_name_as_is);
	 printf("\n");
	 return (0);
}

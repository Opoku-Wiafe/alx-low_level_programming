#include "function_pointers.h"
/**
 * print_name - function that prints name using function pointers
 * @name: string to add name
 * @f: pointer to the function
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

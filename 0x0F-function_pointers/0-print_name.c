#include "function_pointers.h"
/**
 * print_name - Print a name.
 * @name: char type string.
 * @f: function pointer that takes a string.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

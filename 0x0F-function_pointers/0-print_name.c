#include "function_pointers.h"

/**
  * print_name - function to apply pointer
  * @f: function
  * @name: name
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

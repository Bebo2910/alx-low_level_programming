#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - function
  * @n : the number of var
  * @separator: separator
  * Return: void
  *
  *
  *
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(ap, int));
			continue;
		}
		printf("%d", va_arg(ap, int));
		if (separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
}

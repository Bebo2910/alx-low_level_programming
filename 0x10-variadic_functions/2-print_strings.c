#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - fin
  * @separator: separator of the function
  * @n: the numver of the arguments
  * Return: void
  *
  *
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);

	while (i--)
	{
		(va_arg(ap, char *)) ? printf("%s", va_arg(ap, char *)) : printf("(nil)");
		if (i == 0)
		{
			printf("\n");
			continue;
		}
		if (separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
}

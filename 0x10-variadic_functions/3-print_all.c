#include "variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>

/**
  * fuck_char - fuck char
  * @separator: s
  * @ap: ap
  * Return: void
  *
  */
void fuck_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
  * fuck_string - fuck string
  * @separator: s
  * @ap: ap
  * Return: void
  *
  */
void fuck_string(char *separator, va_list ap)
{
	char *s = va_arg(ap, char *);

	switch ((int)(!s))
	{
		case 1:
			s = "(nil)";
	}
	printf("%s%s", separator, s);
}

/**
  * fuck_int - fuck int
  * @separator: s
  * @ap: ap
  * Return: void
  *
  */
void fuck_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
  * fuck_float - fuck float
  * @separator: s
  * @ap: ap
  * Return: void
  */
void fuck_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
  * print_all - function to be printed
  * @format: fuck
  * Return: fuck
  *
  *
  *
  */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	token_t list_of_fucks[] = {
		{"c", fuck_char},
		{"f", fuck_float},
		{"s", fuck_string},
		{"i", fuck_int},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (list_of_fucks[j].token)
		{
			if (format[i] == list_of_fucks[j].token[0])
			{
				list_of_fucks[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

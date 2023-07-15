#include <stdio.h>

/**
  *main - print hexadecimal
  *Return: 0
  */
int main(void)
{
	char c;
	int i;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
  *main - print hexadecimal
  *Return: 0
  */
int main(void)
{
	for (char c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (int i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

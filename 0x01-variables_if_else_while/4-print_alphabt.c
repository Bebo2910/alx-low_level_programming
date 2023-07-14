#include<stdio.h>

/**
  *main - alphapets without e and q
  *Return: 0
  */
int main(void)
{
	for (int count = 97; count <= 122; count++)
	{
		if (count != 101 && count != 113)
		{
			putchar(count);
		}

	}
	putchar('\n');
	return (0);
}

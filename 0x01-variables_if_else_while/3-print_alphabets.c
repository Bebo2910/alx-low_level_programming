#include<stdio.h>

/**
  * main - print alphapets
  * Return: 0
  */

int main(void)
{
	for (int count = 97; count <= 122; count++)
	{
		putchar(count);
	}
	for (int sound = 65; sound <= 90; sound++)
	{
		putchar(sound);
	}
	putchar('\n');
	return (0);

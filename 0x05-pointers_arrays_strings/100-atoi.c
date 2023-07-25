#include "main.h"

/**
  * _atoi - print number in string
  * Return: result
  * @s: string of a number
  *
  *
  */

int _atoi(char *s)
{
	int i, dir = 1, result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		/*to make a check for the sign*/
		if (s[i] == '-')
		{
			dir = -dir;
		}
		/*make a check if it is a number*/
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if ((s[i] <= '0' || s[i] >= '9') && s[i] != '+')
		{
			break;
		}
	}

	result *= dir;
	return (result);
}

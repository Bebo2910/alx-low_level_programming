#include <stdio.h>
#include "main.h"

/**
  * _isdigit - checks if the input is number
  *@c: to be checked
  * Return: 1 or 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

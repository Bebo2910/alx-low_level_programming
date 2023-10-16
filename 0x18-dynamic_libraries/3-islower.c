#include "main.h"
/**
  * _islower - find lowercase
  * @c: the character to be checked
  * Return: if True 1
  * if False 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


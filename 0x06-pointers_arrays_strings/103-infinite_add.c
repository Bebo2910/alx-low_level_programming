#include "main.h"

/**
  *
  *
  *
  *
  *
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	long long i, j, k, num1, num2, digit;

	/*finding the nunber of the first number*/
	num1 = 0;
	for (i = 0; n1[i] != '\0'; i++)
	{
		digit = n1[i] - '0';
		num1 = num1 * 10 + digit;
	}

	/*finding the second number*/
	num2 = 0;
	for (j = 0; n2[j] != '\0'; j++)
	{
		digit = n2[i] - '0';
		num2 = num2 * 10 + digit;
	}

	k = num1 + num2;

#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  *
  * @n: refer to the int number
  *
  * Return: last digit, int value
  */

int print_last_digit(int n)
{
	int l_d = n % 10;

	_putchar(l_d);

	return (l_d);
}

#include "main.h"
/**
 * print_sign - prints number sign
 *
 * @n: number of checks
 *
 * Return: 1 if greater then 0, 0 if equal to 0 and -1 if less then 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}

}

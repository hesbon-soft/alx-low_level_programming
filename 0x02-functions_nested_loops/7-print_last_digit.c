#include "main.h"
/**
 * print_last_digit - function that prints last digit
 *
 * @y: parameter
 * Return: always x
 */

int print_last_digit(int y)
{
	int x;

	x = y % 10;
	if (y < 0)
		x = -x;
	return (x);
}

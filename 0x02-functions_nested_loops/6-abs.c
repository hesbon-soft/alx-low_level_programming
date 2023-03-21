#include "main.h"

/**
 * _abs - compute absolute value
 *
 * @x: integer
 *
 * Return: value of x
 */
int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}

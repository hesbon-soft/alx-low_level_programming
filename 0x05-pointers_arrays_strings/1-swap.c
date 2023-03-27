#include "main.h"

/**
 * swap_int - swap values
 * @a: first value
 * @b: second value
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

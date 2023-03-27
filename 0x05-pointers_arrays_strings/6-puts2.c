#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: function
 * Return: always zero
 */
void puts2(char *str)
{
	int x;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}

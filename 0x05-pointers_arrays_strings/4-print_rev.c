#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: always 0
 */
void print_rev(char *s)
{
	int x;
	int count = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
		count++;
	for (x = count ; x >= 0 ; x--)
		_putchar(s[x]);
	_putchar('\n');
}

#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char i;
	int n;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	for (i = 'a' ; i <= 'f' ; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

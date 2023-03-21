#include "main.h"
/**
 * _isalpha - checks alphabetic characters
 *
 * @c: character to be checked
 *
 * Return: return 1 if its an alphabet else 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

#include "main.h"
#include <stddef.h>
/**
 * _strcpy - copies the string
 * @dest: destination pointer
 * @src: source pointer
 * Return: destination string
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	if (dest == NULL)
		return (NULL);
	for (x = 0 ; src[x] != '\0' ; x++)
		dest[x] = src[x];
	return (dest);
}

#include "main.h"
/**
 * _islower - fonction
 * _islower: function that checks for lowercase
 * @c: parametre
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

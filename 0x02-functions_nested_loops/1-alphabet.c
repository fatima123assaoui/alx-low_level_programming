#include "main.h"
/**
 * print_alphabet - fonction
 * print_alphabet: function that prints the alphabet, in lowercase
 * Return: always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}

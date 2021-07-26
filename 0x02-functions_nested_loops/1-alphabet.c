#include "holberton.h"
/**
 * print_alphabet - prints the alphabet
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}

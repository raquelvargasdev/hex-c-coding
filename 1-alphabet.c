#include <stdio.h>
#include "holberton.h"
/**
 * main - prints the alphabet
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

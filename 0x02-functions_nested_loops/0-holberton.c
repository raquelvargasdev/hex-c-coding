#include <stdio.h>
#include "holberton.h"
/**
 * main - Print Holberton using char
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char n[9] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');
	return (0);
}
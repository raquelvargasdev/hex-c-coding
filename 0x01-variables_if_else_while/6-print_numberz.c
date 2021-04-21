#include <stdio.h>
/**
 * main - Prints numbers from 0 to 10 without using char
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar((number % 10) + '0');
	}

	putchar ('\n');
	return (0);
}

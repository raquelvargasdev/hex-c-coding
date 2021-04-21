#include <stdio.h>
/**
 * main - prints numbers from 0 to 10
 * Return: 0
 */

int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - Prints alphabet lowercase
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');

	return (0);
}

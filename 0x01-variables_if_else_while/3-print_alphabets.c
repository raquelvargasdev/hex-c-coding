#include <stdio.h>
/**
 * main - Prints lowercase and uppercase alphabet
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}	
	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}

	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * main -prints 10 times the alphabet, 
 * in lowercase, followed by a new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i = 0;

	for (i = 0; i<=9; i++)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

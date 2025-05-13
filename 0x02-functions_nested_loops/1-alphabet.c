#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	char lowerCase_alphabet = 'a';

	while (lowerCase_alphabet <= 'z')
	{
		_putchar(lowerCase_alphabet);
		lowerCase_alphabet++;
	}
	_putchar('\n');

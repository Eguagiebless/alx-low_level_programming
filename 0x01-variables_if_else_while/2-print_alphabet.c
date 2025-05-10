#include <stdio.h>
/**
 * main - print alphabet in lower case
 * Return: o success
 */
int main (void)
{
	char lowerCase_alphabet;
	lowerCase_alphabet = 'a';

	while (lowerCase_alphabet <= 'z')
	{
		putchar(lowerCase_alphabet);
		lowerCase_alphabet++;
	}
	putchar('\n');
	return (0);

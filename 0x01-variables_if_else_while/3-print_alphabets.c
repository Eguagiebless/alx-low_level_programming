#include <stdio.h>
/**
 * main - print all lower case alphabet followed
 * upper case alphabet
 * Return: 0 success
 */
int main(void)
{
	char lower_case = 'a';
	chsr upper_case = 'A';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}

	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar('\n');
	return (o);

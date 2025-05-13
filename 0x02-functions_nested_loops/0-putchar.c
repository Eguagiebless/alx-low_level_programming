#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: 0 succss
 */

int main(void)
{
	char print[] = "_putchar";
	int i = 0;

	while (print[i] != '\o')
	{
		_putchar(print);
		i++;
	}
	_putchar('\n');
	return (0);
}

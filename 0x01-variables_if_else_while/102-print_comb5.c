#include <stdio.h>

/**
 * main - print all possible combination
 * of two two digits
 * Reutn: 0 success
 */

int main(void)
{
    int i, j, a, b, c, d;
    for (i = 0; i < 100; i++)
    {
        for (j = i; j < 100; j++)
        {
            a = i / 10; b = i % 10; c = j / 10; d = j % 10;
            putchar(a + '0'); putchar(b + '0');
            putchar(' ');
            putchar(c + '0'); putchar(d + '0');
            if (i != 99 || j != 99)
            {
                putchar(','); putchar(' ');
            }
        }
    }
    putchar('\n');
    return (0);
}

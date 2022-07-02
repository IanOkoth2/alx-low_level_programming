#include <stdio.h>
/**
 * main - main block
 * Description: Printing all the base 16 numbers.
 * Return: 0
 */
int main(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
        for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

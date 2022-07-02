#include <stdio.h>
/**
 * main - main block
 * Description: A program that prints all single digit numbers.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}

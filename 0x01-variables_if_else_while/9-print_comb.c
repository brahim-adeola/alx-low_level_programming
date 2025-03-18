#include <stdio.h>
/**
 * main - Print all possible combination of single digits
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}

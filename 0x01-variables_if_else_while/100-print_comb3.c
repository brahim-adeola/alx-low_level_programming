#include <stdio.h>
/**
 * main - Print all possible different combinations of two digits.
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int first_digit = 0;
	int second_digit;

	while (first_digit < 9)
	{
		second_digit = 0;
		while (second_digit < 10)
		{
			if (first_digit < second_digit)
			{
				putchar(first_digit + '0');
				putchar(second_digit + '0');
				if (first_digit != 8 || second_digit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');
	return (0);
}

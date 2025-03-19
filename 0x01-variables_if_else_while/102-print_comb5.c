#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int first_digit = 0, second_digit, third_digit, fourth_digit;

	while (first_digit < 10)
	{
		second_digit = 0;
		while (second_digit < 10)
		{
			third_digit = 0;
			while (third_digit < 10)
			{
				fourth_digit = 1;
				while (fourth_digit < 10)
				{
					if (second_digit < fourth_digit)
					{
						putchar(first_digit + '0');
						putchar(second_digit + '0');
						putchar(' ');
						putchar(third_digit + '0');
						putchar(fourth_digit + '0');
						if (first_digit != 9 || second_digit ||
third_digit != 9 || fourth_digit != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
					fourth_digit++;
				}
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');
	return (0);
}

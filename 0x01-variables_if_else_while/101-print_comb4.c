#include <stdio.h>
/**
 * main - Print  all possible different combinations of three digits
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int first_digit = 0, second_digit, third_digit;

	while (first_digit < 8)
	{
		second_digit = 1;
		while (second_digit < 9)
		{
			third_digit = 2;
			while (third_digit < 10)
			{
				if (first_digit < second_digit && second_digit < third_digit)
				{
					putchar(first_digit + '0');
					putchar(second_digit + '0');
					putchar(third_digit + '0');
					if (first_digit != 7 || second_digit != 8 || third_digit != 9)
					{
						putchar(',');
						putchar(' ');
					}
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

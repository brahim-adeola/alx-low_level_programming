#include <stdio.h>
/**
 * main - Print hexadecimal digit
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int digit = 0;
	char letter = 'a';

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}
	while (letter < 'g')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

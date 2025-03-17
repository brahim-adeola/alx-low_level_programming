#include <stdio.h>
/**
 * main - Print alphabetic characters on reverse order
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char character = 'z';

	while (character >= 'a')
	{
		putchar(character);
		character--;
	}
	putchar('\n');
	return (0);
}

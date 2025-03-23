#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase alphabetic characters ten times
 *
 */
void print_alphabet_x10(void)
{
	char letter;
	int counter = 0;

	while (counter < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		counter++;
	}
}

#include <stdio.h>
/**
 * main - Print all alphabetical characters except e  and q
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		if (character == 'e' || character == 'q')
		{
			character++;
			continue;
		}
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}

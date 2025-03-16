#include <stdio.h>
/**
 * main - Print a-z using putchar and one loop
 *
 * Return: Always 0  on success
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

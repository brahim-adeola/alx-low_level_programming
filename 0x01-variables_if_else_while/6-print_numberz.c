#include <stdio.h>
/**
 * main - Print  0-9
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}

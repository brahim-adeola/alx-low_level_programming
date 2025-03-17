#include <stdio.h>
/**
 * main - Print 0-9
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}

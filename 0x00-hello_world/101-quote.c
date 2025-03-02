#include <unistd.h>
#include <stdio.h>
/**
 * main - Print a string to the stdout
 *
 * Return: Always 0 on success
 */
int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, \
2015-10-19\n", 59);
	return (0);
}

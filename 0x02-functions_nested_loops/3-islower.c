/**
 * _islower - Check if a character is lowercase alphabet
 * @c: Character to be checked
 *
 * Return: 1 if true else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

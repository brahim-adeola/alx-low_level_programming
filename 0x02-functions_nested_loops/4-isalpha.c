/**
 * _isalpha - Check if a character is alphabetic or not
 * @c: Character to be checked
 *
 * Return: 1 if true else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

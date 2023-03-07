/**
 * _isupper- checks if a char is uppercase
 * @c: the char we get from the main
 *
 *
 * Return: 1 if it is upercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

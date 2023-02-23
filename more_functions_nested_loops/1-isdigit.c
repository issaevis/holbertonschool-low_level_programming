/**
 * _isdigit- checks if an int is a digit
 * @c: the int we get from the main
 *
 *
 * Return: 1 if it is a number, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

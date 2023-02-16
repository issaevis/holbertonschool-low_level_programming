#include <unistd.h>
/**
 * main - Printing to the standard error
 * Return: Will return 1 if everything went well
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, str, sizeof(str) - 1);

	return (1);
}

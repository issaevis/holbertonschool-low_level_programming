/**
 * cap_string- turns all lowercase letters at the beginning uppercase
 * @s: the address of the string
 *
 *
 * Return: returns a string
 */

char *cap_string(char *s)
{
	int i, j;
	char *separators = ",;.!?\"(){} \n\t";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; separators[j] != '\0' ; j++)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z' && s[i] == separators[j])
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}

	}
	return (s);
}


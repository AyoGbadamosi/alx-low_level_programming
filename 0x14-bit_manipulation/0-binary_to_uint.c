#include "main.h"
/**
 * check_char- checks if here is one or more chars in the string
 * that is not 1 0r 0
 * @b: pointer to string of 0 and 1 chars
 * Return: 0 0r 1
 */
int check_char(const char *b)
{
	if (*b == '\0')
		return (1);
	else if (*b != '0' && *b != '1')
		return (0);
	else
		return (check_char((b + 1)));
}

/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: ui or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int a, j, k;

	ui = 0;
	if (!b)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
		;
	j = check_char(b);
	if (j == 1)
	{
		for (a--, k = 1; a >= 0; a--, k *= 2)
		{
			if (b[a] & 1)
			{
				ui += k;
			}
		}
	}
	else if (j == 0)
	{
		return (0);
	}
	return (ui);
}

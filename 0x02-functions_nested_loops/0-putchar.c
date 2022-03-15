#include <stdio.h>

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s[10] = "_putchar";
	int i = 0;

	while (i < 10)
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

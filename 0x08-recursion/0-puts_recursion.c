#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: input string
 * Return: No return
 */
void _puts_recursion(char *s)
{
	int count = 0;

	if (*(s + count) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + count));
	count++;
	_puts_recursion((s + count));
}

#include "holberton.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int count = 0,n,i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 0)
		i = count / 2;
	else
		i = (count - 1) / 2;

	for (i = n; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}

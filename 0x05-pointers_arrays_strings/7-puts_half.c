#include "main.h"

/**
 * puts_half - a function ,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;
	for (; i < len / 2 ; i++)
	_putchar(str[i]);

	_putchar('\n');
}
#include <unistd.h>
#include "main.h"

void print_alphabet(void)
{
	char i ='a';

	while( i <='z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();

	return (0);
}

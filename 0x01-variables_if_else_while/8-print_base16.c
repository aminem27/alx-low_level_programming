#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9' ; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f' ; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}

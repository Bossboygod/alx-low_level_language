#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase ten times
 */

void print_alphabet_x10(void)
{
	int c;
	int count = 0;

	for (count = 0; count <= 9; count++)
	{

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	}
}

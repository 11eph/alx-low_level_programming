#include "main.h"

/**
* print_numbers - Print the numbers from sice 0 up to 9
* Description: This a program that prints the numbers, from 0 to 9.
* Return: The numbers since 0 up to 9
*/

void print_numbers(void)
{
		int c;

		for (c = '0'; c <= '9'; c++)
		{
		_putchar(c);
		}
		_putchar('\n');
}

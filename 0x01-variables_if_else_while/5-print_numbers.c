#include <stdio.h>

/**
* main - Entry point
* Description: This a program that prints all single digit.
* Return: Always 0 (success)
*/

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}

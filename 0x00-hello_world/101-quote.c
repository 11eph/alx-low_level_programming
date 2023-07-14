#include <unistd.h>

/**
* main - Entry point
* Description: This program prints a phrase of art
* Return: Always 0 (success)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

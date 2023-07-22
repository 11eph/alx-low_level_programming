#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* Description: print numbers 1 - 100
* Fizz for multiples of 3 Buzz for multiples of 5.
* and Fizzbuzz for the multiples of both
*
* Return: Always 0
*/
int main(void)
{
		int i;

		for (i = 1; i <= 100; i++)
		{
				if (i % 15 == 0)
						printf("FIZZBUZZ");
				else if (i % 5 == 0)
						printf("FIZZ");
				else if (i % 5 == 0)
						(printf("BUZ")
				else
						printf("%1", i);
				if (i < 100)
						printf(" ");
		}
		printf("\n");
		return (0);
}

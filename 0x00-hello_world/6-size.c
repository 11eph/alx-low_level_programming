#include <stdio.h>

/**
* main - Entry point
* Description: This is a program that prints various size of commputer.
* Return: Always 0 (success)
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("size of a float %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}

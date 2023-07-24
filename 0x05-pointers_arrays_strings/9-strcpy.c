#include "main.h"

/**
* _strcpy - fuction that copies the string
*
* @dest: pointer to destimation char
* @src: pointer to source char
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}

#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: efgh
 * @src: abcd
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int x = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; x < a ; x++)
	{
		dest[x] = src[x];
	}
	dest[a] = '\0';
	return (dest);
}

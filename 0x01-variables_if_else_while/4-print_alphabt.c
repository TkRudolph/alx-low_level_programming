#include <stdio.h>
/**
 *main - program that prints the alphabet except q & e in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char lowercase;

	lowercase = 'a';

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)

		if (lowercase != 'e' && lowercase != 'q')
		{
			putchar(lowercase);
		}
	putchar('\n');

	return (0);
}

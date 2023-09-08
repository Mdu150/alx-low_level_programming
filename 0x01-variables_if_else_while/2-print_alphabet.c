#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(alp[n]);
	}
	putchar('\n');
	return (0);
}

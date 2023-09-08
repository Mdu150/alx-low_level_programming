#include <stdio.h>
/**
 * main - prints alphabet in lower case and then in uppercase
 *  followed by a new line
 *
 *  Return: Always 0 (Succes)
 */
int main(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
	putchar(small);

	for (small = 'A'; small <= 'Z'; small++)
	putchar(small);
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		printf("%x", i);
	}
	putchar('\n');
	return (0);
}

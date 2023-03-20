#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	char lowcase;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (lowcase = 'a'; lowcase <= 'f'; lowcase++)
		putchar(lowcase);
	putchar('\n');

	return (0);
}

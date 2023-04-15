#include <stdio.h>
/**
 * main - where the main code is
 * 
 * @argc: vriable type intiger
 * @argv: variable type char
 *
 * Return: return 0 when success.
 */

int main(int argc, char *argv[])
{
	int d;
for (d = 0; d < argc; d++)
{
	printf("%s\n", argv[d]);
}
	return (0);
}

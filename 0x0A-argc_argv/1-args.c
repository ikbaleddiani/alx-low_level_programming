#include <stdio.h>
/**
 * main - where the main code is
 *
 * @argc: vriable type intiger
 * @argv: variable type char.
 *
 * Return: return 0 when success.
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

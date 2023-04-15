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
	int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
	return (0);
}

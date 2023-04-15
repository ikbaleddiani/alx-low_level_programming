#include <stdio.h>
/**
 * main - where the main code is
 * 
 * @argc: vriable type intiger
 * @argv: variable type char
 *
 * Return: return 0
 */

int main(int argc, char **argv)
{
	int loop;

	for (loop = 0; loop < argc; loop++)
		printf("%s\n", argv[loop]);
	return (0);
}

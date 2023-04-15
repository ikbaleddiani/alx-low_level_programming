#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: number of arguements passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if success, 1 if an error.
 */

int main(int argc, char *argv[])
{
int d, j, sum;

sum = 0;

if (argc < 2)
{
	printf("0\n");
	return (0);
}

for (d = 1; d < argc; d++)
{
	for (j = 0; argv[d][j]; j++)
	{
		if (!isdigit(argv[d][j]))
	{
		printf("Error\n");
		return (1);
	}
	}
	sum += atoi(argv[d]);
}

printf("%d\n", sum);

return (0);
}

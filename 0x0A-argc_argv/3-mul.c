#include <stdio.h>
#include <stdlib.h>
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
	(void)argc;
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

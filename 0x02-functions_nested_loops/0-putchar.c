#include "main.h"
/**
 *main - Entry point
 *
 *Description: Using _putchar
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char word[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}

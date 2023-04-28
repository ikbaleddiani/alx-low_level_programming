
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: input pointer
 * @b: characters
 * @n: number of bytes
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array using memset
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

/**
 * multiply - initialize array with 0 byte
 * @s1: string 1
 * @s2: string 2
 *
 * Return: nothing
 */

void multiply(char *s1, char *s2)
{
	int i, l1, l2, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	l1 = _length(s1);
	l2 = _length(s2);
	tmp = l2;
	total_l = l1 + l2;
	ptr = _calloc(sizeof(int), total_l);
	
	temp = ptr;

	for (l1--; l1 >= 0; l1--)
	{
		f_digit = s1[l1] - '0';
		res = 0;
		l2 = tmp;
		for (l2--; l2 >= 0; l2--)
		{
			s_digit = s2[l2] - '0';
			res += ptr[l2 + l1 + 1] + (f_digit * s_digit);
			ptr[l1 + l2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[l1 + l2 + 1] = res % 10;
	}
	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}

	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}



/**
 * main - a program that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: 0 on success, otherwise to 98 in faile
 */

int main(int argc, char *argv[])
{
char *n1 = argv[1];
char *n2 = argv[2]

  if (argc != 3)
    error();

  check_number(n1);
  check_number(n2);

  multiply(n1, n2);

  return 0;
}

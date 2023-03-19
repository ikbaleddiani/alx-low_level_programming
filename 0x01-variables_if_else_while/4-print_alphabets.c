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
char lowcase, e, q;
e = 'e';
q = 'q';
for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
{
if (lowcase != e && lowcase != q)
putchar(lowcase);
}
printf("\n");
return (0);
}

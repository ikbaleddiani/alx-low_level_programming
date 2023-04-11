#include "main.h"

/**
* set_string - function that sets the value of a pointer to a char
* @s:  pointer to string 
* @to: string to set value @to
*/

void set_string(char **s, char *to)
{
	*s = to;
}

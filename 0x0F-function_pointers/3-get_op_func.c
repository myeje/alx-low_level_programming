i#include <stdio.h>
#include <stdlib.h>
#include "functions_pointer.h"

/**
 * get_op_func - main pointer function
 * @s: operator passed as argument
 * Return: nothing
 */
int (*get_op_func(char *s))(int, int)
{
	if (s == NULL)
		return;
	get_op_func(s);
}

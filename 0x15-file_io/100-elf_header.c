#include <stdio.h>

/**
 * main - function that displays the information contained in the ELF header
 * @argc: amount of arguments passed
 * @argv: arguments passed
 * Retun: 1 if successful and -1 otherwise
 */
int main(int argc, char **argv)
{
	printf("argc: %d, argv: %p\n", argc, (void *)*argv);
	return (1);
}

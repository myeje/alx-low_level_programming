#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char pla;

	for (pla = 'z'; pla >= 'a'; pla--)
		putchar(pla);
	putchar('\n');

	return (0);
}

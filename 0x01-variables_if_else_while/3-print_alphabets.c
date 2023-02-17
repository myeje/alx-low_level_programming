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
	char alp;

	for (alp = 'a'; 'a' <= 'z'; alp++)
		putchar(alp);
	for (alp = 'A'; 'A' <= 'Z'; alp++)
		putchar(alp);
	putchar('\n');

	return (0);
}

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
	int num;
	char alp;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);
	putchar('\n');

	return (0);
}

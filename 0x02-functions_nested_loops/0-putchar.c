#include<unistd.h>
#include "_putchar.c"
/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[8] = "_putchar";
	int a;

	for (a = 0; a <= 9; a++)
		putchar(word[a]);

	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: An input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int len = strlen(s);
	int i;
	int separator = 1;

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || 
				str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || 
				str[i] == ')' || str[i] == '{' || str[i] == '}')
			separator = 1;
		else if (separator)
		{
			s[1] = toupper(s[1]);
			separator = 0;
		}
	}
	return (s);
}

#include "main.h"
/**
* rot13 - encode to rot13
* @s: parameter
* Return: s
*/
char *rot13(char *s)
{
	int i;
	int j;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char converted[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == normal[j])
			{
				s[i] = converted[j];
				break;
			}
		}
	}
	return (s);
}

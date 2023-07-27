#include "main.h"
/**
* leet - encode into 1337
* @n: parameter
* Return: n
*/
char *leet(char *n)
{
	int a = 0, b = 0;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (n[a] != '\0')
	{
		while (b < 10)
		{
			if (n[a] == s1[b])
			{
				n[a] = s2[b];
			}
			b++;
		}
		a++;
	}
	return (n);
}

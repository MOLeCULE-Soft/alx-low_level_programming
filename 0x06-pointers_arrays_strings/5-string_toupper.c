#include "main.h"
/**
* string_toupper - changes all lowercase letters to uppercase
* @s: string to be changed to uppercase
*
* Return: pointer to string s buffer
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 97 + 25)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

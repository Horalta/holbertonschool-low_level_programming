#include "main.h"
/**
 *rev_string - function the reverse a string.
 *@s: return value
 *Return: alway
 */
void rev_string(char *s)
{
	int len = 0;
	int firstl = 0;
	int lastl;

	while (s[len] != '\0')
	{
		len++;
	}
	lastl = len - 1;
	while (firstl < lastl)
	{
		char temp = s[firstl];

		s[firstl] = s[lastl];
		s[lastl] = temp;
		firstl++;
		lastl--;
	}
}

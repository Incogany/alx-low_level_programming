#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - serchers a string for any of a set bytes
 * it locates the first occurence in the string s of any of the bytes in the string accept
 * @s: pointer to string accept
 * @accept: pointer to string accept
 *
 * Return: pointer to a byte in s that matches one of the bytes in accept ot NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int counter, counter2;

	p = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		for (counter2 = 0; accept[counter2]; counter2++)
		{
			if (accept[counter2] == s[counter])
			{
				p = &s[counter];
				return (p);
			}
		}
	}
	return(p);
}

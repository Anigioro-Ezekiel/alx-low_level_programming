#include "main.h"

/**
 * _isupper(int c); - a function that checks for uppercase character.
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	char uppercase ='A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c=uppercase)
		{
			isupper=1;
			break;
		}
	}
	return (isupper);
}

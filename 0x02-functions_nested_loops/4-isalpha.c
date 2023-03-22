#include "main.h"
/**
 * _isalpha - This function prints if characters are lower or upper or others
 *
 * @c: This is the parameter that prints the characters
 *
 * Return: Return 1 if its an alphabet(lowercase or uppercase) or not
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

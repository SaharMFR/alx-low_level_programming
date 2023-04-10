#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned integer.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the converted number , or 0 if 'b' is NULL or if there
 *  is one or more chars in the string 'b' that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, added;
	int len, i;

	num = 0;
	added = 1;

	if (b)
	{
		for (len = 0; b[len]; len++)
		{
			;
		}
		for (i = len - 1; i >= 0; i--)
		{
			if ((b[i] == '1') || (b[i] == '0'))
			{
				if (b[i] == '1')
					num += added;
				added *= 2;
			}
			else
				return (0);
		}
		return (num);
	}
	return (0);
}

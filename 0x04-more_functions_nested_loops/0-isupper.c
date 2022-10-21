#include "main.h"
/**
 *
 *  * _isupper - checks if the letter is uppercase
 *
 *   * @c: interger to be checked
 *
 *    * Return: Always return 0.
 *
 *     */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

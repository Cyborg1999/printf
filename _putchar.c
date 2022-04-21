#include <unistd.h>
<<<<<<< HEAD

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
=======
#include "holberton.h"

/**
 * _putchar -writes the characterc to stdout
 * @c: The characterto print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approppriately.
 */
 int _putchar(char c)
>>>>>>> f50fbc6ba535eebdfc56a18e2ccd72d7da26d98e
{
	return (write(1, &c, 1));
}

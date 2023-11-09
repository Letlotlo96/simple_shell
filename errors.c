#include "shell.h"

/**
 * _eputs - prints an input string
 * @str: the string to be printed
 *
 * Return: Nothing
 */
void _eputs(char *str)
{
	int i = 0;
	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - writes the character c to stderr
 * @c: The character to print
 *
 * Return: On success 1, on error, -1 and errno is set appropriately
 */
int _eputchar(char c)
{
	static int i;
	static char buf (WRITE_BUF_SIZE);

	if (c == BUF_FLUSH || i >= WRITE BUFF SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF__FLUSH)
		buf[i++] = c;
	return (1);
}


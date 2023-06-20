#include <unistd.h>
/**
 * _putchar - Entry point
 * @c: Character
 * Return: always 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

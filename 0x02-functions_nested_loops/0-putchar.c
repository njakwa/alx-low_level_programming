#include <unistd.h>

/**
 *  * _putchar - writes the character c to stdout
 *       */
int main(void)
{
	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
}

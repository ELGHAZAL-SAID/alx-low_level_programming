#include <stdio.h>

/**
*main - main function -> print 9-0
*
*Return: return 0 every-time
*/

int main(void)
{
	int ch;

	for (ch = '9'; ch >= '0'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);

}


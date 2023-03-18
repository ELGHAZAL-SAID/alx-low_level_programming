#include <stdio.h>

/**
*main - main function => 0->9 using putchar
*
*Return: return 0 every-time
*/

int main(void)
{

	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);

}


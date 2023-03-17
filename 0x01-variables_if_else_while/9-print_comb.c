#include <stdio.h>

/**
*main - main function - print 1, -> 9
*
*Return: return 0
*/

int main(void)
{

	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != 9)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);

}


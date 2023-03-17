#include <stdio.h>

/**
*main - main function -> print base 16 numbers
*
*Return: return 0 every-time
*/

int main(void)
{

	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);

		if (ch == '9')
		{
			for (ch = 'a'; ch <= 'f'; ch++)	
				putchar(ch);
		}
	}

	putchar('\n');
	return (0);

}


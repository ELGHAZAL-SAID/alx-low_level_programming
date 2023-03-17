#include <stdio.h>

/**
*main - main function -> putchar 01 -> 89
*
*Return: return 0
*/

int main(void)
{
	int ch,chr;

	for (ch = '0'; ch <= '8'; ch++)
	{
		for (chr = ch + 1; chr <= '9'; chr++)
		{
			putchar(ch);
			putchar(chr);
			if (ch == '8' && chr == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}


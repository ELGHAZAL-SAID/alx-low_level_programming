#include <stdio.h>

/**
*main - main function -> putchar 01 -> 89
*
*Return: return 0
*/

int main(void)
{
	int ch, chr, chs;

	for (ch = '0'; ch <= '7'; ch++)
	{
		for (chr = ch + 1; chr <= '8'; chr++)
		{
			for (chs = chr + 1; chs <= '9'; chs++)
			{
				putchar(ch);
				putchar(chr);
				putchar(chs);
				if (ch == '7' && chr == '8' && chs == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}


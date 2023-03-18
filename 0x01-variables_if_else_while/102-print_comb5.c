#include <stdio.h>

/**
*main - main function -> putchar 00 01 -> 98 99
*
*Return: return 0
*/

int main(void)
{

	int ch, chr, cht, chs;

	for (ch = 0; ch < 100; ch++)
	{
		for (chr = 0; chr < 100; chr++)
		{
			cht = ch * 100 + chr;
			chs = chr * 100 + ch;
			if (cht < chs)
			{
				putchar((ch / 10) + '0');
				putchar((ch % 10) + '0');
				putchar(' ');
				putchar((chr / 10) + '0');
				putchar((chr % 10) + '0');
				if (ch != 98 || chr != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}


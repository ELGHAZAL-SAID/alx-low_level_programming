#include <stdio.h>

/**
*main - main function for printing upper and lower case chr
*
*Return: return 0 every-time
*
*/

int main(void){

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar((int)ch - 32);
	}
	putchar('\n');
	return (0);

}


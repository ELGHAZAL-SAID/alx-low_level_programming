#include <stdio.h>

/**
*main - generate random password
*
*Return: always 0
*/

int main (void)
{
char c;
int x;

srand(time(0));
while (x <= 2645)
{
c = rand() % 128;
x += c;
putchar(c);
}
putchar(2772 - x);
return (0);
}

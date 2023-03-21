#include <stdio.h>

/**
*main - print first 50 Fibonacci numbers
*
*Return: return 0
*
*/

int main(void)
{

	int cnt, num, num1, num2;

	num = 0;
	cnt = 0;
	num1 = 0;
	num2 = 1;
	while (cnt < 50)
	{
		num = num1 + num2;
		printf("%d, ", num);
		num1 = num2;
		num2 = num;
		cnt++;
	}
	return (0);
}

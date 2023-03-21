#include <stdio.h>
#include <stdbool.h>

/**
*print_to_98 - print natural nums from n to 98
*@n: ver to start from
*Return: nothing
*/

void print_to_98(int n)
{
	while (true)
	{
		if (n > 98)
			printf("%d, ", n--);
		else if (n < 98)
			printf("%d, ", n++);
		else
		{
			printf("%d\n", n);
			break;
		}
	}
}

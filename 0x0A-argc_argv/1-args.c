#include <stdio.h>

/**
* main - print the args number passed to program
* @argc: number arguments supplied to the program
* @argv: table of arguments supplied to the program
* Return: laways 0
*/


int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}

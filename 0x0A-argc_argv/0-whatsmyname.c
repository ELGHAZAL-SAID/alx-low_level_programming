#include <stdio.h>

/**
* main - print the program name
* @argc: number arguments supplied to the program
* @argv: table of arguments supplied to the program
* Return: laways 0
*/

int main(int __attribute__ ((unused)) argc, char **argv)
{
	printf("%s\n", *(argv + 0));
	return (0);
}

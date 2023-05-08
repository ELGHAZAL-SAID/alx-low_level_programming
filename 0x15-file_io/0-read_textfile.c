#include "main.h"

/**
* read_textfile - read a text file and print it to the posix std output
* @filename: file name to be read
* @letters: number of letter to read
* Return: return the number of letters if possible else 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int id, sc;
	char *handler;

	handler = malloc(letters * sizeof(char));

	if (filename == 0 || handler == 0)
		return (0);

	id = open(filename, O_RDONLY);

	if (id < 0)
		return (0);

	sc = read(id, handler, letters);

	write(1, handler, letters);

	if (sc < 0)
		return (0);
	return (sc);
}

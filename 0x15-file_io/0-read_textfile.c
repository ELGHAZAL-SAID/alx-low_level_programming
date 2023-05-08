#include "main.h"

/**
* read_textfile - read a text file and print it to the posix std output
* @filename: file name to be read
* @letters: number of letter to read
* Return: return the number of letters if possible else 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t id, sc, r;
	char *handler;

	handler = malloc(letters * sizeof(char));

	if (filename == 0 || handler == 0)
		return (0);

	id = open(filename, O_RDONLY);


	r = read(id, handler, letters);

	sc = write(1, handler, r);

	if (sc < 0 || id < 0 || r < 0 || sc != r)
	{
		free(handler);
		return (0);
	}
	free(handler);
	close(id);
	return (sc);
}

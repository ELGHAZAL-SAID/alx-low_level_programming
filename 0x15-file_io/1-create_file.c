#include "main.h"

/**
* create_file - creates a file
* @filename: file name
* @text_content: content to put in the file
* Return: 1 if success, else -1
*/

int create_file(const char *filename, char *text_content)
{
	int id, w;

	if (filename == 0)
		return (-1);

	id = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (id == -1)
		return (-1);

	if (text_content != 0)
		w = write(id, text_content, strlen(text_content));
	else
		 w = write(id, text_content, 0);
	if (w == -1)
		return (-1);

	close(id);

	return (1);
}

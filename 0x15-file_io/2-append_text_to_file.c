#include "main.h"

/**
* append_test_to_file - append text to the end of a file
* @filename: file name
* @text_content: content of the file
* Return: 1 if success else 0 
*
*/


int append_text_to_file(const char *filename, char *text_content)
{
	int id, w = 0;

	if (filename == 0)
		return (-1);

	id = open(filename, O_APPEND | O_WRONLY);

	if (id == -1)
		return (-1);

	if (text_content != 0)
		w = write(id, text_content, strlen(text_content));

	if (w == -1)
		return (-1);

	return (1);
}

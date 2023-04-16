#include "main.h"

/**
* _realloc - reallocate e memory block
* @ptr: pointer to the memory allocated
* @old_size: old size of allocated space
* @new_size: new size of allocated space
* Return: pointer of allocated memo or 0
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *t;

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	if (old_size == new_size)
		return (ptr);

	t = malloc(new_size);

	if (t == 0)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	return (t);

}

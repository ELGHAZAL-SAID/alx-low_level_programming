#include "main.h"
#include <string.h>
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

	if (ptr == 0 && new_size == 0)
		return (0);

	if (old_size == new_size)
		return (ptr);

	else if (old_size < new_size)
	{
		t = malloc(new_size);

		if (t == 0)
			return (0);
		t = memcpy(t, ptr, old_size);
		free(ptr);
		return (t);
	}

	t = malloc(new_size);

	if (t == 0)
		return (0);
	t = memcpy(t, ptr, new_size);
	free(ptr);
	return (t);
}

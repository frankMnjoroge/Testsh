#include "shell.h"
/**
 * myfree - releases a pointer and sets the address to NULL
 * @ptr: address of the pointer to release
 * Return: 1 if released, else 0.
 */
int myfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

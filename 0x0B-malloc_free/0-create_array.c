#include "main.h"
#include <stdlib.h>

/** a function that creates an array of chars, and initializes it with a specific char.
 *Returns NULL if size = 0
 *Returns a pointer to the array, or NULL if it fails 
 */
 
 char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return(NULL);
	}
	arr = malloc(sizeof(char) * size);
/** checks if mallooc is successful */
	if (arr == NULL)
		return(NULL);
	for (i=0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

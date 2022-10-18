#include "varidic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * function that prints numbers, followed by a new line
 *
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned intt index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	
	printf("\n");

	va_end(nums);
}

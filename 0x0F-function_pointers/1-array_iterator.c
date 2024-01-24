#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: array to execute function on
 * @size: size of array
 * @action: function to execute
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == 0 || action == 0)
return;
for (i = 0; i < size; i++)
action(array[i]);
}

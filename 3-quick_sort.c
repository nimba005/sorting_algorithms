#include "sort.h"

/**
 * quich_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: length of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quicksort_recursion(array, 0, size - 1, size);
}

/**
 * quicksort_recursion - sorting the array recursiovely
 * @array: array to be sorted
 * @first: first(lowest) element(idx) in the array
 * @last: last element of the array (highest)
 * @size: length of the array
 * Return: Nothing
 */
void quicksort_recursion(int *array, int first, int last, size_t size)
{
int pivot_index;
if (first < last)
{
pivot_index = partition(array, first, last, size);
quicksort_recursion(array, first, pivot_index - 1, size);
quicksort_recursion(array, pivot_index + 1, last, size);
}
}

/**
 * partition - divide our list
 * @array: our array to be sorted
 * @first: first elem of the array
 * @last: last ele of the array
 * @size: length of the array
 * Return: pivot index
 */
int partition(int *array, int first, int last, size_t size)
{
int pivot_value = array[last];
int i = first - 1;
int j;
for (j = first; j <= last - 1; j++)
{
if (array[j] < pivot_value)
{
i++;
if (i != j)
{
swap(&array[i], &array[j]);
print_array(array, size);
}
}
}
if (array[last] < array[i + 1])
{
swap(&array[i + 1], &array[last]);
print_array(array, size);
}
return (i + 1);
}

/**
 * swap - swap between two elements
 * @a: first ele
 * @b: sec ele
 * Return: Nothing
 */
void swap(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

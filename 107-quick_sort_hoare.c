#include "sort.h"

/**
 * quick_sort_hoare - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: length of the array
 * Return: void
 */
void quick_sort_hoare(int * array, size_t size)
{
if (array == NULL || size < 2)
return;
quicksort_recursion_h(array, 0, size - 1, size);
}

/**
 * quicksort_recursion_h - sorting the array recursively
 * @array: array to bes sorted
 * @first: first(lowest) element(idx) in array
 * @last: last element of the array (highest)
 * @size: length of the array
 * Return: Nothing
 */
void quicksort_recursion_h(int * array, int first, int last, size_t size)
{
int pivot_index;
if (first < last)
{
pivot_index = partition_h(array, first, last, size);
quicksort_recursion_h(array, first, pivot_index, size);
quicksort_recursion_h(array, pivot_index + 1, last, size);
}
}

/**
 * partition_h - divide our list
 * @a: our array to be sorted
 * @first: first elem of the array
 * @last: last element of the array
 * @size: length of the array
 * Return: pivot index
 */
size_t partition_h(int *a, size_t first, size_t last, size_t size)
{
int pivot, swap;
pivot = a[last];
while (first <= last)
{
while (a[first] < pivot)
first++;
while (a[last] > pivot)
last--;
if (first <= last)
{
if (first != last)
{
swap = a[first];
a[first] = a[last];
a[last] = swap;
print_array(a, size);
}
first++;
last--;
}
}
return (last);
}

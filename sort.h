#ifndef SORT_H
#define SORT_H

/** LIBRARY FILES*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** DATA STRUCTURE FOR DOUBLY LINKED LIST */
/**
 * struct listint_s - doubly linked list node
 * @n: integer stored in node
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

/*FUNCTION PROTOTYPES*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void sort_deck(deck_node_t **deck);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void linklist_swapping(listint_t *sec, listint_t *first, listint_t **h);
void swap(int *a, int *b);
int partition(int *array, int first, int last, size_t size);
void quicksort_recursion(int *array, int first, int last, size_t size);
void swap_sh(int *arr, int x, int y, int *swapped);
void merge(size_t l, size_t r, size_t m, int *dest, int *org);
void merge_recursion(size_t l, size_t r, int *a, int *cpy_arr);
size_t partition_h(int *a, size_t first, size_t last, size_t size);
void quicksort_recursion_h(int *array, int first, int last, size_t size);
void sortify(int *array, int heap, int i, int size);
listint_t *create_listint(const int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void move_left(listint_t *sec, listint_t *first, listint_t **h);
unsigned int pow_10(unsigned int p);
unsigned int count_sort(int *a, size_t s, unsigned int d);
int get_max(const int *a, size_t s);

#endif

#include "heap.h"

element left(element i)
{
	return 2 * i;
}

element right(element i)
{
	return 2 * i + 1;
}

element parent(element i)
{
	return i / 2;
}

void scambia(element *a, element *b)
{
	element tmp;
	
	AssignElement(tmp, *a);
	AssignElement(*a, *b);
	AssignElement(*b, tmp);
}

void MoveUp(element *A, element i)
{
	while (i != 1 && A[i] > A[parent(i)])
	{
		scambia(&A[i], &A[parent(i)]);
		i = parent(i);
	}
}

void heapify(element *A, element i, size_t heap_size)
{
	element l, r, largest;
	l = left(i);
	r = right(i);
	largest = i;

	if (l <= heap_size && A[l] > A[i])
		largest = l;
	if (r <= heap_size && A[r] > A[i])
		largest = r;

	if (largest != i)
	{
		scambia(&A[i], &A[largest]);
		if (i != 1)
			heapify(A, parent(largest), heap_size);
	}
}

void build_heap(element *A, size_t heap_size)
{
	for (size_t i = heap_size / 2; i >= 1; --i)
		heapify(A, i, heap_size);
}

void heapsort(element *A, size_t size)
{
	element i;
	size_t heap_size;
		
	heap_size = size;
	for (i = size; i >= 2; --i)
	{
		scambia(&A[1], &A[i]);
		heapify(A, 1, --heap_size);
	}
}
#include "heap.h"

number left(number i)
{
	return 2 * i;
}

number right(number i)
{
	return 2 * i + 1;
}

number parent(number i)
{
	return i / 2;
}

void scambia(number *a, number *b)
{
	number tmp = 0;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void MoveUp(number *A, number i)
{
	while (i != 1 && A[i] > A[parent(i)])
	{
		scambia(&A[i], &A[parent(i)]);
		i = parent(i);
	}
}

void heapify(number *A, number i, size_t heap_size)
{
	number l, r, largest;
	l = left(i);
	r = right(i);
	largest = i;

	if (l <= heap_size && A[l] > A[i])
		largest = l;
	if (r <= heap_size && A[r] > A[i] && A[r] > A[largest])
		largest = r;

	if (largest != i)
	{
		scambia(&A[i], &A[largest]);
		heapify(A, largest, heap_size);
	}
}

void build_heap(number *A, size_t heap_size)
{
	for (size_t i = heap_size / 2; i >= 1; --i)
		heapify(A, i, heap_size);
}

void heapsort(number *A, size_t size)		/*Scambia l'elemento + grande in cima al vettore heap con l'elemento + piccolo alla fine, esclude l'ultimo elemento(che è diventato il + grande) e ripete l'operazione con il vettore parziale senza considerare l'ultimo elemento;*/
{
	number i;
	size_t heap_size;
	
	build_heap(A, size);
		
	heap_size = size;
	for (i = size; i >= 2; --i)
	{
		scambia(&A[1], &A[i]);
		heapify(A, 1, --heap_size);
	}
}
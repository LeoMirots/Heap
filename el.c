#include "el.h"

bool IsEqual(element a, element b)
{
	if (a == b)
		return true;
	return false;
}

int cmp(element a, element b)
{
	if(a == b)
		return 0;
	if(a < b)
		return -1;
	return 1;
}

void AssignElement(element dst, element src)
{
	dst = src;
}

int DeleteElement(element e)
{
	return EXIT_SUCCESS;
}

void PrintElement(element e)
{
	printf("%u;", e);
}

/*-----------------Element2----------------------------------------------------------------------------------------------------------------------*/

bool IsEqual2(element2 a, element2 b)
{
	if (a == b)
		return true;
	return false;
}

int cmp2(element2 a, element2 b)
{
	if (a == b)
		return 0;
	if (a < b)
		return -1;
	return 1;
}

void AssignElement2(element2 *dst, element2 src)
{
	*dst = src;
}

int DeleteElement2(element2 e)
{
	return EXIT_SUCCESS;
}

void PrintElement2(element2 e)
{
	printf("%u;", e);
}

/*--------------------------------Element3-------------------------------------------------------------------------------------------------------*/

int cmp3(element3 a, element3 b)
{
	if (a == b)
		return 0;
	if (a < b)
		return -1;
	return 1;
}

void AssignElement3(element3 *dst, element3 src)
{
	*dst = src;
}

int DeleteElement3(element3 e)
{
	return EXIT_SUCCESS;
}

void PrintElement3(element3 e)
{
	printf("%u;", e);
}
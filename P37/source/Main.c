#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int lineSearch(const int array[], int key, int size);

int main(void)
{
	int a[SIZE], x, sear, element;

	for (x = 0; x < SIZE; x++)
	{
		a[x] = 2 * x;
	}

	printf("Enter integer search key:\n");
	scanf_s("%d", &sear);

	element = lineSearch(a, sear, SIZE);
	if (element != -1)
	{
		printf("Found value in element %d\n", element);
	}
	else
	{
		printf("Values not found\n");
	}

	system("pause");
	return 0;
}

int lineSearch(const int array[], int key, int size)
{
	int n;
	for (n = 0; n < size; ++n)
	{
		if (array[n] == key)
		{
			return n;
		}
	}
	return -1;
}
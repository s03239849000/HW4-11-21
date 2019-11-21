#include <stdio.h>
#include <stdlib.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void)
{
	printf("First call to each function:\n");
	staticArrayInit();
	automaticArrayInit();

	printf("\n\nsecond call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");

	system("pause");
	return 0;
}

void staticArrayInit(void)
{
	static int array[3];
	int i;

	printf("\nValues on entering staticArrayInit:\n");

	for (i = 0;i <= 2;i++)
	{
		printf("array[%d] = %d ", i, array[i]);
	}
	printf("\nValues on exiting staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
	{
		printf("array[%d]= %d ", i, array[i] += 5);
	}
}
void automaticArrayInit(void)
{
	int array2[3] = { 1,2,3 };
	int i;
	printf("\n\nValues on entering automicarrayinit:\n");

	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d] = %d ", i, array2[i]);
	}
	printf("\nValues on exiting automicarrayinit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d] = %d ", i, array2[i] += 5);
	}


}
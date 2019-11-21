#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void modifyarr(int b[], int size);
void modifyel(int e);

int main(void)
{
	int s[SIZE] = { 0,1,2,3,4 }, i;

	printf("Effects of passing entire array by reference:\n\nThe"
		"valuse of the original array are:\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", s[i]);
	}
	printf("\n");

	modifyarr(s, SIZE);
	printf("The values of the modifined array are:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", s[i]);
	}
	printf("\n\n\nEffects of passing array element"
		"by value:\n\nThe value of a[3] os %d\n", s[3]);

	modifyel(s[3]);
	printf("The values of a[3] is %d\n", s[3]);

	system("pause");
	return 0;
}

void modifyarr(int b[], int size)
{
	int j;
	for (j = 0; j < size; j++)
	{
		b[j] *= 2;
	}
}
void modifyel(int e)
{
	printf("Values in modifyElement is %d\n", e *= 2);
}
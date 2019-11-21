#include <stdio.h>
#include <stdlib.h>

void pr(const int a[][3]);
int main(void)
{
	int a1[2][3] = { {1,2,3},{4,5,6} };
	int a2[2][3] = { 1,2,3,4,5 };
	int a3[2][3] = { {1,2},{4} };
	printf("values in array1 by row are:\n");
	pr(a1);

	printf("values in array2 by row are:\n");
	pr(a2);

	printf("values in array3 by row are:\n");
	pr(a3);


	system("pause");
	return 0;
}
void pr(const int a[][3])
{
	int i;
	int j;
	for (i = 0;i <= 1;i++)
	{
		for (j = 0;j <= 2;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
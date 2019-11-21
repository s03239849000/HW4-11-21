#include <stdio.h>
#include <stdlib.h>
#define STUDENT 3
#define EXAMS 4

int mi(const int grades[][EXAMS], int pupils, int tests);
int ma(const int grades[][EXAMS], int pupils, int tests);
double averge(const int setofgrades[], int tests);
void pr(const int grades[][EXAMS], int puplis, int tests);

int main(void)
{
	int student;
	const int studentgrades[STUDENT][EXAMS] =
	{ {77,68,86,73},{96,87,89,78},{70,90,86,81} };
	printf("The array is:\n");
	pr(studentgrades, STUDENT, EXAMS);

	printf("\n\nLowest grade: %d\nHighest grade :%d\n",
		mi(studentgrades, STUDENT, EXAMS),
		ma(studentgrades, STUDENT, EXAMS));
	for (student = 0; student < STUDENT; student++)
	{
		printf("The average grade for student %d is %.2f\n", student, averge(studentgrades[student], EXAMS));
	}

	system("pause");
	return 0;
}

void pr(const int grades[][EXAMS], int puplis, int tests)
{
	int i, j;
	printf("          [0]  [1]  [2]  [3]");
	for (i = 0; i < puplis; i++)
	{
		printf("\nstudentgrades[%d] ", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grades[i][j]);
	}
}

int mi(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j, lowgrades = 100;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowgrades)
			{
				lowgrades = grades[i][j];
			}
		}
	}
	return lowgrades;
}
int ma(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j, higrades = 0;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > higrades)
			{
				higrades = grades[i][j];
			}
		}
	}
	return higrades;
}

double averge(const int setofgrades[], int tests)
{
	int i, total = 0;
	for (i = 0; i < tests; i++)
	{
		total += setofgrades[i];
	}

	return(double)total / tests;
}

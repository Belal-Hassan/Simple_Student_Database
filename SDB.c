#include <stdio.h>
#include "SDB.h"
size = 0;

bool SDB_isfull()
{
	if (size == 10)
		return true;
	else
		return false;
}

uint32 SDB_GetUsedSize()
{
	return size;
}

bool SDB_AddEntry()
{
	if (!SDB_isfull())
	{
		printf("Enter student data:-\n");
		printf("Student ID: ");
		scanf_s("%d", &(student[size].Student_ID));
		printf("Student year: ");
		scanf_s("%d", &(student[size].Student_year));
		printf("Course 1 ID: ");
		scanf_s("%d", &(student[size].Course1_ID));
		printf("Course 1 grade: ");
		scanf_s("%d", &(student[size].Course1_grade));
		printf("Course 2 ID: ");
		scanf_s("%d", &(student[size].Course2_ID));
		printf("Course 2 grade: ");
		scanf_s("%d", &(student[size].Course2_grade));
		printf("Course 3 ID: ");
		scanf_s("%d", &(student[size].Course3_ID));
		printf("Course 3 grade: ");
		scanf_s("%d", &(student[size].Course3_grade));
		size++;
		return true;
	}
	return false;
}

void swap(uint32* ptr1, uint32* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

bool SDB_DeleteEntry(uint32 id)
{
	for (int i = 0; i < size; i++)
	{
		if (id == student[i].Student_ID)
		{
			swap(&student[i].Student_ID, &student[size].Student_ID);
			swap(&student[i].Student_year, &student[size].Student_year);
			swap(&student[i].Course1_ID, &student[size].Course1_ID);
			swap(&student[i].Course1_grade, &student[size].Course1_grade);
			swap(&student[i].Course2_ID, &student[size].Course2_ID);
			swap(&student[i].Course2_grade, &student[size].Course2_grade);
			swap(&student[i].Course3_ID, &student[size].Course3_ID);
			swap(&student[i].Course3_grade, &student[size].Course3_grade);
			size--;
			return true;
		}
	}
	return false;
}

bool SDB_ReadEntry(uint32 id)
{
	for (int i = 0; i < size; i++)
	{
		if (id == student[i].Student_ID)
		{
			printf("Student data:-\n");
			printf("Student ID: %d\n", student[i].Student_ID);
			printf("Student year: %d\n", student[i].Student_year);
			printf("Course 1 ID: %d\n", student[i].Course1_ID);
			printf("Course 1 year: %d\n", student[i].Course1_grade);
			printf("Course 2 ID: %d\n", student[i].Course2_ID);
			printf("Course 2 year: %d\n", student[i].Course2_grade);
			printf("Course 3 ID: %d\n", student[i].Course3_ID);
			printf("Course 3 year: %d\n", student[i].Course3_grade);
			return true;
		}
	}
	return false;
}

void SDB_GetIds()
{
	for (int i = 0; i < size; i++)
		printf("ID %d: %d\n", i+1, student[i].Student_ID);
}

bool SDB_DoesIdExist(uint32 id)
{
	for (int i = 0; i < size; i++)
		if (id == student[i].Student_ID)
				return true;
	return false;
}
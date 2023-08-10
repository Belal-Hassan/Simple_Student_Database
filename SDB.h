#pragma once
#include "STD.h"

typedef struct SimpleDb
{
	uint32 Student_ID;
	uint32 Student_year;
	uint32 Course1_ID;
	uint32 Course1_grade;
	uint32 Course2_ID;
	uint32 Course2_grade;
	uint32 Course3_ID;
	uint32 Course3_grade;
}Student;

Student student[10];
extern uint32 size;
extern uint32 id;

bool SDB_isfull();
uint32 SDB_GetUsedSize();
bool SDB_AddEntry();
void swap(uint32* ptr1, uint32* ptr2);
bool SDB_DeleteEntry(uint32 id);
bool SDB_DoesIdExist(uint32 id);
bool SDB_ReadEntry(uint32 id);
void SDB_GetIds();
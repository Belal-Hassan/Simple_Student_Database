#pragma once
#include "STD.h"
// This is the header file for the main functions of the database.
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
}Student; // A Definition of structure of type "Student" containing the student's ID, year, course 1 ID, course 1 grade, course 2 ID, course 2 grade, course 3 ID, course 3 grade.

Student student[10]; // Array of type "Student"as defined in the previous structure.
extern uint32 size; // Current size of the array which will then be used in adding and removing students from the database.
extern uint32 id; // A variable for temporarily storing stuednt IDs.

bool SDB_isfull(); // Checks if the Database is full.
uint32 SDB_GetUsedSize(); // Returns the current used size of the array.
bool SDB_AddEntry(); // Returns true when successfully adding a student's entry.
void swap(uint32* ptr1, uint32* ptr2); // Swaps 2 intergers.
bool SDB_DeleteEntry(uint32 id); // Deletes a student's entry by the ID.
bool SDB_DoesIdExist(uint32 id); // Checks if a given ID exists in the database.
bool SDB_ReadEntry(uint32 id); // Reads a student's entry by the ID.
void SDB_GetIds(); // Returns a list of the IDs.

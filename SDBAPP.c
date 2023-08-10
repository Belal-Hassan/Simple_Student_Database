#include <stdio.h>
#include "SDBAPP.h"
id = 0;

void SDB_Action(uint32 choice)
{
	switch (choice)
	{
		case 0:
			break;
		case 1:
			printf("Added? %d\n", SDB_AddEntry());
			break;
		case 2:
			printf("Used size: %d\n", SDB_GetUsedSize());
			break;
		case 3:
			printf("Enter the ID to read: ");
			scanf_s("%d", &id);
			printf("Found? %d\n", SDB_ReadEntry(id));
			break;
		case 4:
			SDB_GetIds();
			break;
		case 5:
			printf("Enter the ID to find: ");
			scanf_s("%d", &id);
			printf("Exists? %d\n", SDB_DoesIdExist(id));
			break;
		case 6:
			printf("Enter the ID to delete: ");
			scanf_s("%d", &id);
			printf("Deleted? %d\n", SDB_DeleteEntry(id));
			break;
		case 7:
			printf("Full? %d\n", SDB_isfull());
		default:
			printf("Number is not in range!");
			break;
	}
}

void SDB_APP()
{
	uint32 i;
	do
	{
		printf("Enter a number from 1 to 7: ");
		scanf_s("%d", &i);
		SDB_Action(i);
	} while (i != 0);
}
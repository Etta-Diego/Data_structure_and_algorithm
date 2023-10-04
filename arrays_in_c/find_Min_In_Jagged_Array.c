#include <stdio.h>
#define MAX 20

/**
 * Main - Entry point of the program
 * Description - Program to display the minimum element in a jagged array
 * Return 0
 */


int main()
{
	int row1[MAX], row2[MAX], size1, size2;
	int *jagged[2]= {row1, row2};
	
	printf("Insert size of the first row: ");
	scanf("%d", &size1);

	printf("Insert elements of the first row:\n");
	for (int index = 0; index < size1; index++)
	{
		printf("Row0[%d] at %d : ", size1, index);
		scanf("%d", &row1[index]);
	}

	printf("\nInsert size of the second row: ");
	scanf("%d", &size2);
	printf("Insert elements of the second row:\n");
	for (int index1 = 0; index1 < size2; index1++)
	{
		printf("Row1[%d] at %d : ", size2, index1);
		scanf("%d", &row2[index1]);
	}
	printf("\n");

	printf("The elements of this jagged array are as follows:\n");

	for (int i = 0; i < 2; i++)
	{
		int *pter = jagged[i];
		printf("Row %d: ", i);
		int loopSize;
		if (i == 0) 
		{
			loopSize = size1;
		} 
		else 
		{
			loopSize = size2;
		}
		for (int j = 0; j < loopSize; j++)	
		{
			printf("%d ", *pter);

			pter++;
		}
		printf("\n");

	}

	int min1; 
	min1 = jagged[0][0]; 


	printf("\nThe minimum element in this array is: "); 
	for (int i = 0; i < 2; i++)
	{
		int *ptr = jagged[i];	
		int loopSize;
		if (i == 0) {
			loopSize = size1;
		} 
		else 
		{
			loopSize = size2;
		}
		for (int j = 0; j < loopSize; j++)
		{
			if (*ptr < min1)
			{
				min1 = *ptr;
			}
			ptr++;
		}
	}
	printf("%d\n", min1);
	return 0;
}

#include <stdio.h>
#define size 3

/**
 *
 * Program to multiply two matrices
 *
 */

int main()
{
	int row, column, loop;
	int matrix0[size][size], matrix1[size][size], matrix2[size][size];

	/* Prompt user to enter array elements for the first matrix*/
	printf("Enter the elements for the first array\n");
	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			printf("First Matrix[row %d][column %d] = ", row, column);
			scanf("%d", &matrix0[row][column]);
		}
	}
	printf("\n");

	/* Prompt user to enter array elements for the second matrix*/
	printf("Enter the elements for the second array\n");
	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			printf("First Matrix[row %d][column %d] = ", row, column);
			scanf("%d", &matrix1[row][column]);
		}
	}
	printf("\n");

	/* Function that multiplies the both matrices*/
	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			matrix2[row][column] = 0;

			for (loop = 0; loop < size; loop++)
			{
				matrix2[row][column] += matrix0[row][loop] * matrix1[loop][column];
				printf("%d + %d * %d = %d\n", matrix2[row][column], matrix0[row][loop], matrix1[loop][column], matrix2[row][column]);
			}
		}
	}

	printf("\nThe result of the multiplication is thus:\n");
	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			printf("%d\t", matrix2[row][column]);
		}
	}
	printf("\n");

	return 0;
}


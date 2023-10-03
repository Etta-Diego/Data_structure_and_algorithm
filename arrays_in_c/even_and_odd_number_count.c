#include <stdio.h>
#define MAX 100

/**
 * C program to count total number of even and odd elements in an array 
 */

int main(int argc, char *argv[])
{
	int array[MAX];
	int index, size, odd_count = 0, even_count = 0;

	printf("Insert the size array:");
	scanf("%d",  &size);

	printf("Insert the elements of the array\n");
	for (index = 0; index < size; index++)
	{
		printf("Array[%d]: ", index);
		scanf("%d", &array[index]);
	}

	for (index = 0; index < size; index++)
	{
		if (array[index] % 2 == 0)
		{
			printf("Even number: %d\t", array[index]);
			even_count++;
		}
		else 
		{
			printf("Odd numbers: %d\t", array[index]);
			odd_count++;
		}
	}

	printf("The odd numbers in this array are: %d\nThe even numbers in this array are: %d\n", odd_count, even_count);



	return 0;	
}

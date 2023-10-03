#include <stdio.h>
#define max 100

/**
 * 
 */


int main()
{
	int index;
	int array[max];
	int size;
	int position;

	printf("Enter the size of the array\n");
	scanf("%d", &size);

	printf("Enter the array elements:\n");
	for (index = 0; index < size; index++)
	{
		printf("array[%d]: ", index);
		scanf("%d", &array[index]);
	}

	printf("Enter the position of the index to delete\n");
	scanf("%d", &position);

	for (index = position - 1; index < size; index++)
	{
		array[index] = array[index + 1];
	}
	size--;

	printf("Array after deletion is: ");
	for (index = 0; index < size; index++)
	{
		printf("%d\t", array[index]);
	}
	printf("\n");
	return 0;
}

#include <stdio.h>
#include <limits.h>
#define MAX 100

/**
 * Description - Program to display the maximum and second maximum in an array.
 *
 */

int main()
{

	int array[MAX], highest1, highest2, size, index;

	printf("Insert the size of the array: ");
	scanf("%d", &size);

	printf("Insert the elements of the array\n");
	for (index = 0; index < size; index++)
	{
		printf("Array[%d]: ", index);
		scanf("%d", &array[index]);
	}

//	highest1 = highest2 = INT_MIN;

	for (index = 0; index < size; index++)
	{
		if (array[index] > highest1)
		{
			highest2 = highest1;
			highest1 = array[index];
		}
		else if (array[index] > highest2 && highest2 < highest1)
		{
			highest2 = array[index];
		}
	}

	printf("The maximum number in the array is %d\n", highest1);
	printf("The second maximum number in the array is %d\n", highest2);

	return 0;
}

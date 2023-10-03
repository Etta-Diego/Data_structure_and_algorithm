#include <stdio.h>
#define max 100

int main()
{

	int index;
	int array[max];
	int size;
int start;
int end;
int temp;

	/* Get user's array size */
	printf("Enter the size of array\n");
	scanf("%d", &size);

	/* Get user's array elements */
	printf("Enter the elements of the array\n");
	for (index = 0; index < size; index++)
	{
		printf("array[%d]: ", index);
		scanf("%d", &array[index]);
	}

	/* Reverse the array element */
	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = array[start];
		array[start] = array[end];
		array[end] = temp;

		start++;
		end--;
	}

	printf("The reversed array elements are: ");
	for (index = 0; index < size; index++)
	{
		printf("%d\t", array[index]);
	}
	printf("\n");

	return 0;
}

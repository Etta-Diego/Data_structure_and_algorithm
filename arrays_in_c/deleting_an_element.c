#include <stdio.h>
#define max 100

/**
 * Program to insert an element in-between an array
 *
 * Return 0 upon success
 */

int main()
{

	int array[max];
	int length;
	int index;
	int position;

	/* Prompts user for array length and stores it in the variable length*/
	printf("Enter your array length: \n");
	scanf("%d", &length);

	/* Displays the length entered by user*/
	printf("You entered array length of %d\n", length);

	/* Prompts user to enter the elements of array */
	for (index = 0; index < length; index++)
	{
		printf("array[%d] = ", index);
		scanf("%d", &array[index]);
	}

	/* Display the elements of array entered */
	printf("The elements of the array are: ");
	for (index = 0; index < length; index++)
	{
		printf("%d\t", array[index]);
	}
	printf("\n");

	/* Prompt user to specify the position to delete the new element*/
	printf("Enter the position of element to be deleted in the array\n");
	scanf("%d", &position);
	printf("You entered position: %d\n", position);

	/* Handles invalid position*/
	if (position < 0 || position > length)
	{
		printf("invalid Position! Enter position between 1 to %d", length);
	}
	else
	{
		/* Copy next element to current element and decrement the position by one*/
		for (index = position - 1; index < length - 1; index++)
		{
			array[index] = array[index + 1];
		}
		length--;


		/* Display all the elements in the array after deletion*/
		printf("After the deletion, these are elements in this array:\n");
			for (index = 0; index < length; index++)
			{
				printf("%d\t", array[index]);
			}
	}	
	printf("\n");

	return 0;
} 

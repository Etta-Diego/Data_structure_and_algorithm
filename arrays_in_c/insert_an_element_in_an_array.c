#include <stdio.h>
#define max 100

int main()
{

	int index;
	int array[max];
	int size;
int position;
int new_value;

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

	/* Get the position of insertion */
printf("Enter the position to insert the new element");
scanf("%d", &position);
printf("Enter the value to be inserted\n");
scanf("%d", &new_value);

for (index = size; index >= position; index--)
{
array[index] = array[index - 1];
}

array[position - 1] = new_value;
size++;


	printf("The array elements are now: ");
	for (index = 0; index < size; index++)
	{
		printf("%d 	", array[index]);
	}
	printf("\n");

	return 0;
}

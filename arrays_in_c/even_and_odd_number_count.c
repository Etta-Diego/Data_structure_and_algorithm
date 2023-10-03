#include <stdio.h>
#define MAX 100

/**
* C program to count total number of even and odd elements in an array 
*/

int main(int argc, char *argv[])
{
int array[MAX], odd_array[MAX], even_array[MAX];
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
		//	printf("Even number: %d\n", array[index]);
			even_array[index] = array[index];
			even_count++;
		}
	else 
	{
	//	printf("Odd number: %d\n", array[index]);
		odd_array[index] = array[index];
		odd_count++;
	}
	}

printf("Odd numbers are: %d in number and there are: %d\n,Even numbers are: %d in number and there are %d\n", odd_count, odd_array[index], even_count, even_array[index]);


	
return 0;	
}

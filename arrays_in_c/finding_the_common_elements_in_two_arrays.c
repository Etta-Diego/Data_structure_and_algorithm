#include <stdio.h>
#define size 100

int main()
{

	int arrayA[size], arrayB[size], arrayC[size];
	int indexA, indexB, index, indexC = 0;
	int sizeA, sizeB;
	int count;


	printf("Enter the size of the first array\n");
	scanf("%d", &sizeA);

	printf("Enter the elements for the first array\n");
	for (indexA = 0; indexA < sizeA; indexA++)
	{
		printf("First array[%d]: ", indexA);
		scanf("%d", &arrayA[indexA]);
	}
	printf("\n");


	printf("Enter the size of the second array\n");
	scanf("%d", &sizeB);

	printf("Enter the elements for the second array\n");
	for (indexB = 0; indexB < sizeB; indexB++)
	{
		printf("First array[%d]: ", indexB);
		scanf("%d", &arrayB[indexB]);
	}
	printf("\n");


	for (indexA = 0; indexA < sizeA; indexA++)
	{
		for (indexB = 0; indexB < sizeB; indexB++)
		{
			if (arrayA[indexA] == arrayB[indexB])
			{
				count = 0;
				for (index = 0; index < indexC; index++)
				{
					if (arrayA[indexA] == arrayC[index])
					{
						count++;
					}
					if (count == 0)
					{
						arrayC[indexC] = arrayA[indexA];
						indexC++;
					}

				}
			}
		}
	}


/*
	if (indexC == 1)
	{
		printf("The common element in both arrays is:\n ");
		for (index = 0; index < indexC; index++)
		{
			printf("%d\t", arrayC[index]);
		}
		printf("\n");
	}

	else if (indexC > 0)
	{*/
		printf("The common elements in both arrays are:\n ");
		for (index = 0; index < indexC; index++)
		{
			printf("%d\t", arrayC[index]);
		}
	 printf("\n");
	/*}

	else
	{
		printf("There are n  common elements in both arrays\n");
	}*/

	return 0;
}

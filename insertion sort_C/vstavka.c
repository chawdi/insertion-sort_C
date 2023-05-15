#include <stdio.h>
#include <malloc.h>
int insertion_sort(int *source, const int size)
{
	int count = 0;
	int temp;

	for (int i = 1; i < size; i++) {
		temp = source[i];
		for (int j = i - 1; j >= 0; j--) {
			if (source[j] < temp)
				break;

			source[j + 1] = source[j];
			source[j] = temp;

			count++;
		}
	}

	return count;
}
int main()
{
	_CrtSetDebugFillThreshold(0);
	int N;
	int *b;
	int source[2][10];
	printf("Input N: ");
	scanf_s("%d", &N);
	b = (int*)malloc(N * sizeof(int));
	printf("Input the array elements: \n");
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < 2; j++)
		{
			scanf_s("%d", &source[i][j]);
		}

	}
	printf("\n");
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < 2; j++)
			printf("%d", source[i][j]);
		printf("\n");

	}
	printf("\n");

	int k = -1;
	
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < 1; j++)
		{
			k += 1;
			b[k] = source[i][j];

			printf("%d", b[k]);
		}
		printf("\n");

	}
	
	insertion_sort(b, N);
	printf("\n");
	printf("Sorted array: \n");
		for (int j = 0; j < N; j++)
		{
			printf("%d", b[j]);
			printf("\n");
			
		}


	printf("\n");
	/*free(b);
	free(source);*/
	system("pause");
	return 0;
}
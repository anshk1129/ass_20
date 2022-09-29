#include <stdio.h>
void bSort(int *arr, int n);
int main()
{
	int arr[10] = {10, 20, 40, 50, 30, 1, 2};
	bsort(arr, 7);
	for (int i = 0; i < 7; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}

void bSort(int *arr, int n)
{
	int i, j;
	int tmp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
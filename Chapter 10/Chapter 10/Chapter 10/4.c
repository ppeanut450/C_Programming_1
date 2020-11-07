#include <stdio.h>
array_copy(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		b[i] = a[i];
	}

	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

	for (i = 0; i < size; i++)
	{
		printf("%d ", b[i]);
	}
}


int main(void)
{
	int a[] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int b[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	array_copy(a, b, 10);

	return 0;
}
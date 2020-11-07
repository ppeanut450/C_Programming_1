#include <stdio.h>
int array_equal(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (a[i] != b[i])
			return 0;
	}

	return 1;
}

int main(void)
{
	int size = 10;
	int a[] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int b[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

	for (int i = 0; i < size; i++)
	{
		printf("%d ", b[i]);
	}

	printf("\n");

	if (array_equal(a, b, size) == 1)
		printf("2개의 배열은 같음");
	else
		printf("2개의 배열은 다름");

	return 0;
}
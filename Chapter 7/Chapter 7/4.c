#include <stdio.h>
int main(void)
{
	int i, j, k;

	for (i = 1; i <= 7; i++)
	{
		for (j = 7 - i; j >= 1; j--)
		{
			printf(" ");
		}

		for (k = 1; k <= i; k++)
		{
			printf("*");
		}

		printf("\n");
	}
}
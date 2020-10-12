#include <stdio.h>
int main(void)
{
	int num, i, j;
	
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
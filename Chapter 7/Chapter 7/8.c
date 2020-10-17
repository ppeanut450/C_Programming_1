#include <stdio.h>
int main(void)
{
	int num = 0, i;

	while (num != -1)
	{
		printf("막대의 높이(종료: -1) ");
		scanf_s("%d", &num);

		for (i = 1; i <= num; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}
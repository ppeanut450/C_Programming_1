#include <stdio.h>
int main(void)
{
	int num, i;
	int x = 0, y = 1, tmp;

	printf("몇번째 항까지 구할까요? ");
	scanf_s("%d", &num);
	
	for (i = 0; i <= num; i++)
	{
		printf("%d, ", x);
		tmp = x + y;
		x = y;
		y = tmp;
	}
}
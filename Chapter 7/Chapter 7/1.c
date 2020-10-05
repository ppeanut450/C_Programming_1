#include <stdio.h>
int main(void)
{
	int num, i;
	printf("카운터의 초기값을 입력하시오: ");
	scanf_s("%d", &num);
	
	for (i = num; i >= 1; i--)
	{
		printf("%d ", i);
	}

	return 0;
}
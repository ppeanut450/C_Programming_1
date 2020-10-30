#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));

	int max = 0, min = 10000000;
	int num[10] = { 0 };
	int i;

	for (i = 0; i < 10; i++)
	{
		num[i] = rand();
		if (num[i] > max)
			max = num[i];
		if (num[i] < min)
			min = num[i];
	}

	printf("최대값은 %d\n", max);
	printf("최소값은 %d\n", min);

	return 0;
}
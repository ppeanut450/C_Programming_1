#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand()
{
	srand((unsigned)time(NULL));
	return rand() % 2;
}

int main(void)
{
	int coin;
	char q = 'y';
	while (q != 'n')
	{
		printf("앞면 또는 뒷면(1 또는 0): ");
		scanf_s("%d", &coin);

		if (b_rand() == coin)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");

		printf("계속 하시겠습니까?(y 또는 n): ");
		scanf_s(" %c", &q);
	}	

	return 0;
}
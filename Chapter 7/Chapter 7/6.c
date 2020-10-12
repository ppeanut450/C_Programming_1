#include <stdio.h>
int main(void)
{
	char cal;
	int x, y, result;
	int max, min;

	do {
		printf("**********************\n");
		printf("A---- Add\n");
		printf("S---- Subtract\n");
		printf("M---- Multiply\n");
		printf("D---- Divide\n");
		printf("Q---- Quit\n");
		printf("**********************\n\n");

		printf("연산을 선택하시오: ");
		scanf_s(" %c", &cal);
		printf("두 수를 공백으로 분리하여 입력하시오: ");
		scanf_s("%d %d", &x, &y);
		
		if (x >= y)
			max = x, min = y;
		else
			max = y, min = x;

		switch (cal)
		{
		case 'A':
			result = max + min;
			printf("%d\n", result);
			break;
		case 'S':
			result = max - min;
			printf("%d\n", result);
			break;
		case 'M':
			result = max * min;
			printf("%d\n", result);
			break;
		case 'D':
			result = max / min;
			printf("%d\n", result);
			break;
		case 'Q':
			break;
		default:
			break;
		}
	} while (cal != 'Q');
}
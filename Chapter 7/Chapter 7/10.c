#include <stdio.h>
int main(void)
{
	double num;
	int inv;
	double result = 1.0;
	int i;

	printf("실수의 값을 입력하시오: ");
	scanf_s("%lf", &num);

	printf("거듭제곱횟수를 입력하시오: ");
	scanf_s("%d", &inv);

	for (i = 1; i <= inv; i++)
	{
		result *= num;
	}

	printf("결과값은 %lf\n", result);

	return 0;
}
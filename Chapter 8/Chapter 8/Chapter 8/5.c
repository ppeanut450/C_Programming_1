#include <stdio.h>
int round(double f)
{
	return f + 0.5;
}

int main(void)
{
	double num;
	printf("실수를 입력하시오: ");
	scanf_s("%lf", &num);

	printf("반올림한 값은 %d입니다.", round(num));
}
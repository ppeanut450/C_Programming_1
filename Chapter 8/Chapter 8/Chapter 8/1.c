#include <stdio.h>
double square(double num)
{
	return num * num;
}

int main(void)
{
	double num;

	printf("정수를 입력하시오: ");
	scanf_s("%lf", &num);

	printf("주어진 정수 %lf의 제곱은 %lf입니다.", num, square(num));
	
	return 0;
}
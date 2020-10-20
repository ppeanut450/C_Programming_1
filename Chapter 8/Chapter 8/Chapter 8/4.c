#include <stdio.h>
int is_leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 366;
	else
		return 365;
}

int main(void)
{
	int year;
	printf("연도를 입력하시오: ");
	scanf_s("%d", &year);

	printf("%d년은 %d일입니다.", year, is_leap(year));

	return 0;
}
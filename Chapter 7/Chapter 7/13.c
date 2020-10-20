#include <stdio.h>
int main(void)
{
	int n, r, i, per = 1;
	printf("n의 값: ");
	scanf_s("%d", &n);
	printf("r의 값: ");
	scanf_s("%d", &r);

	for (i = 0; i < r; i++)
	{
		per *= n - i;
	}
	printf("순열의 값은 %d입니다.", per);

	return 0;
}
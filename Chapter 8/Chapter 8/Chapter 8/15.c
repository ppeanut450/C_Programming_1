#include <stdio.h>
int is_prime(int i)  // is_prime() 함수 선언, 정수를 반환하므로 int형
{
	int j;  // 반복문에 사용할 j 변수 선언
	for (j = 2; j < i; j++)  // 2부터 i보다 작을 때까지 반복
	{
		if (i % j == 0)  // i를 j로 나눴을 때 나머지가 0이라면
			return 1;  // 1을 반환 (= 소수가 아님)
	}
	return 0;  // 나머지가 0이 아니면 0을 반환 (= 소수임)
}

int main(void)  // main() 함수 선언
{
	int i;  // 반복문에 사용할 i 변수 선언
	for (i = 2; i <= 100; i++)  // 2부터 100까지 반복
	{
		if (is_prime(i) == 0)  // is_prime() 함수의 리턴 값이 0일 때 (즉, i가 j로 딱 맞게 나눠지지 않을 때 = 소수일 때)
			printf("%d ", i);  // "i "의 값을 출력
	}
	return 0;  // 함수 종료
}
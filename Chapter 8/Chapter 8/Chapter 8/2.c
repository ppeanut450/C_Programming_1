#include <stdio.h>
int check_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return 1;
	else
		return 0;
}

int main(void)
{
	char c;
	printf("문자를 입력하시오: ");
	scanf_s(" %c", &c);

	if (check_alpha(c) == 1)
		printf("%c는 알파벳 문자입니다.", c);
	else
		printf("%c는 알파벳 문자가 아닙니다.", c);

	return 0;
}
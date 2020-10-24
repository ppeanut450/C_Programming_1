#include <stdio.h>
int is_prime(int i)
{
	int j;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
			return 1;
	}
	return 0;
}

int main(void)
{
	int i;
	for (i = 2; i <= 100; i++)
	{
		if (is_prime(i) == 0)
			printf("%d ", i);
	}
	return 0;
}
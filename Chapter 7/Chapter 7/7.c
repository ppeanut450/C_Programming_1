#include <stdio.h>
int main(void)
{
	int i, j, n = 0;
	for (i = 2; i <= 100; i++)
	{
		n = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				n = 1;
		}
		if(n==0)
			printf("%d ", i);
	}
	return 0;
}
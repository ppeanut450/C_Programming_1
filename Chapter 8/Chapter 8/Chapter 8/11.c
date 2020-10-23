#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand()
{
	return 1 / (double)(rand() % 100);
}

int main(void)
{
	srand((unsigned)time(NULL));

	printf("%lf %lf %lf %lf %lf", f_rand(), f_rand(), f_rand(), f_rand(), f_rand());

	return 0;
}
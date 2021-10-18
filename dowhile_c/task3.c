#include <stdio.h>
#include <math.h>

void print(int n, int k)
{
	double a = 0;
	int i = 0;

	do
	{
		if ((i + 1) % k == 0)
		{
			++i;
			continue;
		}
		a = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		printf("%lf ", a);
		++i;
	} while (i < n);

	printf("\n");
}
#include <stdio.h>
#include <math.h>

void print(int n, int k)
{
	double a = 0;
	
	for (int i = 0; i < n; i++)
	{
		if ((i + 1) % k == 0)
		{
			continue;
		}
		a = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		printf("%lf ", a);
	}
	printf("\n");
}
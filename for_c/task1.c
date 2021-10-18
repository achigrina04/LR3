#include <math.h>

double summ(int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
	}
	return sum;
}

#include <math.h>

double summ2(double eps)
{
	double sum = 0;
	int i = 0;
	double a;

	a = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
	while (fabs(a) > eps)
	{
		a = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		sum += a;
		i++;
	}
	return sum;
}

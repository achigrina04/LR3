#include <math.h>

double summ2(double eps)
{
	double sum = 0;
	int i = 0;
	double a;

	a = pow(-1, i) * (-1 - (pow(i + 1, 2) / pow(i + 2, 2)));
	if (fabs(a) <= eps)
	{
		return a;
	}
	else
	{
		do 
		{
			a = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
			sum += a;
			i++;
		} while (fabs(a) > eps);
	}
	return sum;
}

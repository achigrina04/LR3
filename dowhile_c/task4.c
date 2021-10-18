#include <math.h>

int findFirstElement(double eps)
{
	int i = 0;
	double a;

	do 
	{
		a = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		if (fabs(a) <= eps)
		{
			break;
		}
		++i;
	} while (fabs(a) > eps);
	return ++i;
}
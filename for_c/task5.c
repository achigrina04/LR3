#include <math.h>

int findFirstNegativeElement(double eps)
{
	int i = 0;
	double a;

	for (i; ;i++)
	{
		a = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		if (fabs(a) <= eps && a < 0)
		{
			return ++i;
		}
	}
	
}
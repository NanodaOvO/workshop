#include <stdio.h>
#include <math.h>
double Total2(int n)
{
	int i;
	double p, u = 0, s;
	for (i = 1; i < n; i++)
	{
		if (i % 3 == 0 && i % 7 == 0)
		{
			p = 1.0 / i;
			u += p;
		}
		return sqrt(u);
	}
}
int main()
{
	double b;
	int a;
	scanf("%d", &a);
	b = Total2(a);
	printf("%.3f", b);
	return 0;
}
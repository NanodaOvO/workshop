#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, s, area;
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%.3f", area);
    return 0;
}
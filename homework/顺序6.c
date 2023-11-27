#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    double p = (a + b + c) / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.3f\n", area);
    return 0;
}
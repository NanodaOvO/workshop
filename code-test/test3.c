#include <stdio.h>

int main()
{
    int a = 100;
    int b = 12;
    float c = 12.0;
   
    double p = a / b;
    double q = a / c;
   
    printf("p=%lf, q=%lf\n", p, q);
   
    return 0;
}

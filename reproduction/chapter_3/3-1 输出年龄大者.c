#include "stdio.h"

void main()
{
    int a, b, max;
    printf("");
    scanf("%d%d", &a, &b);
    max = a;
    if (b > max)
    {
        max = b;
    }
    printf("max = %d\n", max);
}
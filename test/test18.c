#include <stdio.h>

float sub(float x, float y, float z)
{
    y -= 1.0;
    z = z + x;
    return z;
}
void main()
{
    float a = 2.5, b = 9.0;
    printf("%f", sub(b - a, a, a));
}
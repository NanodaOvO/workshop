#include <stdio.h>

int main()
{
    int a = 3;
    char b = '1';
    a = a + 48;
    b = b - 48;
    printf("%c\n", a);
    printf("%d\n", b);
    float x = 2.5, y = 4.7;
    int a1 = 7;
    float z;
    z = x + a % 3 * (int)(x + y) % 2 / 4;
    printf("%f\n", z);
    return 0;
}
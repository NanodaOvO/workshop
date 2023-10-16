#include <stdio.h>

int main() {
    float x = 1.23456e10, y;
    y = x + 114514;
    printf("x = %e\n",x);
    printf("y = %e\n",y);
    printf("x = %f\n",x);
    printf("y = %f\n",y);
    return 0;
}
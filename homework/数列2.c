#include <stdio.h>

int main(){
    int n, i, a = 1, b = 1;
    float sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        b = b + a;
        a = b - a;
        sum += (float)a / (float)b;
    }
    printf("%.3f", sum);
    return 0;
}
#include <stdio.h>

int main(){
    int n, i, j = 0;
    float sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        j += i;
        sum += 1.0 / j;
    }
    printf("s=%.4f", sum);

    return 0;
}
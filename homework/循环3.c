#include <stdio.h>

int main(){
    int n, b;
    double sum = 0;
    scanf("%d",&n);
    for (b = 1; b <= n; b++)
    {
        if(b % 5 == 0 || b % 9 == 0)
            sum += 1.0 / b;
    }
    printf("s=%.4f", sum);
    return 0;
}
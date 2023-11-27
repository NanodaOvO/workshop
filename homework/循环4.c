#include <stdio.h>
#include <math.h>

int main(){
    int n, b;
    double sr = 0;
    scanf("%d",&n);
    for (b = 1; b <= n; b++)
    {
        if(b % 3 == 0 && b % 7 == 0)
            sr += 1.0 / b;
    }
    sr = sqrt(sr);
    printf("%.3f", sr);
    return 0;
}
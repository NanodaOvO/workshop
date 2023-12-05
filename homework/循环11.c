#include <stdio.h>
#include <math.h>

int main(){
    int n, i;
    double sr = 0;
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 7 == 0)
            sr += 1.0 / i;
    }
    sr = sqrt(sr);
    printf("%.2f", sr);
    return 0;
}
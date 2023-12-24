#include <stdio.h>
#include <math.h>
// n>0且不包括n

double Total2(int n){
    int i;
    double sum = 0.0;
    for (i = 1; i < n; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            sum += 1.0 / i;
        }
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%.3f", sqrt(Total2(n)));
    return 0;
}
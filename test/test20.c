#include <stdio.h>

int main(){
    int n = 5;
    int k = 0;
    float d = 1.0, s = 0.0;
    do
    {
        s += d;
        k++;
        d = 1.0 / (k * (k + 1));
    } while (k <= n);
    
    printf("%f\n", s);
    return 0;
}
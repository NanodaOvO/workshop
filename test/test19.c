#include <stdio.h>

int main(){
    int n = 5;
    float s = 1.0;
    for(int k = 1; k <= n; k++)
    {
        s = s + 1.0 / (k * (k + 1));
    }
    printf("%f\n", s);
    return 0;
}
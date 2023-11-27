#include <stdio.h>

int main(){
    int n, a;
    scanf("%d", &n);
    float b = 0;
    for (a = 1; a <= n; a++)
    {
        b += a / (2.0 * a + 1.0);
    }
    printf("%.3f", b);
    return 0;
}
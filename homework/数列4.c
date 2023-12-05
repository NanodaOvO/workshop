#include <stdio.h>

int main(){
    int n, b = 1;
    for (scanf("%d", &n); n > 0; n--)
    {
        b *= n;
    }
    printf("%d", b);
    return 0;
}
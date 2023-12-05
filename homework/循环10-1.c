#include <stdio.h>

int main(void){
    int n, a;
    scanf("%d", &n);
    for(a = 1; a * a <= n; a++)
    {
        printf("%d ", a * a);
    }
}
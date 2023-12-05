#include <stdio.h>
int main(){
    int d, t = 0;
    scanf("%d", &d);
    for (t = 0; d != 0; d = d / 10)
    {
        t += d % 10;
    }
    printf("%d", t);
    return 0;
}
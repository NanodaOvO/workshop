#include <stdio.h>

int main(){
    int i, n, sum = 0;
    scanf("%d", &n);
    for(i = 1; i < n; i++)
    {
       if(n % i == 0)
       {
        printf("%d,", i);
        sum += i;
       }
    }
    printf("%d sum=%d", n, sum + n);
    sum += i;
    return 0;
}
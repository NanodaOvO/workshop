#include <stdio.h>

int main(){
    int n, a, b = 0;
    scanf("%d", &n);
    for(a = 2; a < n; a++)
    {
        if(n % a == 0)
        {
            b++;
        }
    }
    if(b != 0)
    {
        printf("N");
    }
    else
    {
        printf("Y");
    }
    return 0;
}
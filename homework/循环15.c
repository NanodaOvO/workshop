#include <stdio.h>
#include <math.h>

int prime(int);

int main(){
    int n, i, b = 0;
    scanf("%d", &n);
    for (i = 2; b < n && i <= 100; i++)
    {
        if (prime(i) == 0)
        {
            printf("%d ", i);
            b++;
        }
    }
    return 0;
}

int prime(int i){
    int j;
    for(j = 2; j < i; j++)
    {
        if(i % j == 0)
        {
            break;
        }
    }
    if (j < i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
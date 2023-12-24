#include <stdio.h>

int IsPrime(int n){
int tmp;
    for (tmp = 2; tmp < n; tmp++)
    {
        if(n % tmp == 0)
        {
            break;
        }
    }
    if (tmp < n)
    {
        return 0; //not prime
    }
    else
    {
        return 1; //is prime
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", IsPrime(n));
    return 0;
}
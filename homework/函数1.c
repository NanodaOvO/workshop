#include <stdio.h>

int TotalOdd(int n,int m){
    int oddsum = 0;
    for (; n < m; n++)
    {
        if (n % 2 != 0)
        {
            oddsum += n;
        }
    }
    return oddsum;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", TotalOdd(a, b));
}
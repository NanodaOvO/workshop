#include <stdio.h>
#include <math.h>

int main(void){
    int n, a, b;
    scanf("%d", &n);
    for(a = 1; a <= n; a++)
    {
        for(b = 1; b <= a; b++)
        {
            if(pow(b, 2) == a)
            {
                printf("%.0f ", pow(b, 2));
            }
        }
    }
}
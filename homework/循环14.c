# include <stdio.h>
# include <math.h>

int main(){
    int a, i, b = 0;
    scanf("%d", &a);
    for (i = 100; i <= a; i++)
    {
        if (i == pow(i % 10, 3) + pow(i / 10 % 10, 3) + pow(i / 100, 3))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
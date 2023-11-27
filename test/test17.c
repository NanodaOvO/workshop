#include<stdio.h>

int main()
{
    char a;
    int b, x, y, z, n;
    scanf("%c%d", &a, &n);
    for(x = 1; x <= n; x++)
    {
        for(y = 1; y <= n-x; y++)
        {
            printf(" ");
        }
        if(x = 1) 
        {
            printf("%c\n", a);
        }
        else
        {
            printf("%c", a);
            for(z = 1; z <= 2 * (x - 1) - 1; z++)
            {
                printf(" ");
            }
            printf("%c\n", a);
        }
        if(a < 'Z')
        {
            a++;
        }
        else
        {
            a = 'A';
        }
        printf("\n");
    }    
    return 0;
}
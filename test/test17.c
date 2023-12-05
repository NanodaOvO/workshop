#include <stdio.h>
#include <unistd.h>

int main()
{
    char a;
    int x, y, z = 1, n, b, c;   // n是棱形开头无空格的那行
    scanf("%c%d", &a, &c);
    n = c / 2 + c % 2;
    for(x = 1; x <= n; x++)
    {
        for(y = 1; y <= n - x; y++)
        {
            printf(" ");
        }
        if(x == 1) 
        {
            printf("%c\n", a);
        }
        else
        {
            printf("%c", a);
            while(z <= 2 * x - 3)
            {
                printf(" ");
                z++;
            }
            z = 1;
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
    }
    if(a > 'A')
        {
            a -= 2;
        }
        else
        {
            a = 'Z';
        }
    for(x = 1; x < n; x++)
    {
        for(y = 1; y <= x; y++)
        {
            printf(" ");
        }
        if(x == n - 1) 
        {
            printf("%c\n", a);
        }
        else
        {
            printf("%c", a);
            b = 2 * (n - x) - 3;
            while(b > 0)
            {
                printf(" ");
                b--;
            }
            printf("%c\n", a);
        }
        if(a > 'A')
        {
            a--;
        }
        else
        {
            a = 'Z';
        }
    }    
    return 0;
}
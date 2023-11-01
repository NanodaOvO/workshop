#include<stdio.h>
int main()
{
    while (1)          
    {
        char a;
        scanf("%c", &a);
        if (a >= 'A' && a <= 'Z')
        {
            a = a + 32;     
            printf("%c", a);
        }
        else if (a >= 'a' && a <= 'z')
        {
            a = a - 32;      
            printf("%c", a);
        }
        else if (a == '#')
            break;
    }
    return 0;
}
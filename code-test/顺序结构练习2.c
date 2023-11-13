#include <stdio.h>
int main()
{
    char a;
    a = getchar();
    if (a >= 'A' && a <= 'Z')
        printf("%d", a);
    else if (a >= 'a' && a <= 'y')
        printf("%c%c", a - 32, a - 31);
    else if (a = 'z')
        printf("%c%c", a - 32, 'A');
    return 0;
}
#include <stdio.h>

int main(){
    while (1)
    {
        char s;
        scanf("%c", &s);
        if (s >= 'A' && s<= 'Z')
        {
            s = s + 32;
            printf("%c", s);
        }
        else if (s >= 'a' && s<= 'z')
        {
            s = s - 32;
            printf("%c", s);
        }
        else if (s == '#')
        {
            break;
        }
        else
        {
            printf("%c", s);
        }
    }
    return 0;
}
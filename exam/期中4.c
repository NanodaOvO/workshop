#include <stdio.h>
int main(){
    char c;
    c = getchar();
    if ((c >= '0') && (c <= '9'))
        printf("N");
    else if ((c >= 'A') && (c <= 'Z'))
        printf("U");
    else if ((c >= 'a') && (c <= 'z'))
        printf("L");
    else if (c == 32)
        printf("S");
    else
        printf("O");
    return 0;
}
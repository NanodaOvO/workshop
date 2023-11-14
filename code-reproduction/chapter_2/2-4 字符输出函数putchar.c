#include "stdio.h"
void main(){
    char ch;
    printf("please inpuit the character:\n");
    ch = getchar();
    putchar(ch);
    putchar('\n');
    printf("The end!\n");
    return;
}
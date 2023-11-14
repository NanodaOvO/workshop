#include <stdio.h>

int main(){
    char a,b,c;
    a = getchar();
    while(getchar()!='\n');
    printf("%c\n",a);
    b = getchar();
    while(getchar()!='\n');
    printf("%c\n",b);
    c = getchar();
    while(getchar()!='\n');
    printf("%c\n",c);
    printf("continue pls!\n");

    char a1,b1,c1;
    a1 = getchar();
    printf("%c\n",a1);
    b1 = getchar();
    printf("%c\n",b1);
    c1 = getchar();
    printf("%c\n",c1);
    printf("The end!\n");
    return 0;
}

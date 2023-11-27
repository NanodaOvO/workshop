#include <stdio.h>
int main(){
    char a;
    printf("请输入小写字母：");
    a=getchar();
    printf("%c%c",a,a-32);
    return 0;
}
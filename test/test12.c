#include <stdio.h>
int main(){
    int b=7; float a=2.5, c=4.7;    
    printf("%f",a+(int)(b/3*(int)(a+c)/2)%4);
    return 0;
}
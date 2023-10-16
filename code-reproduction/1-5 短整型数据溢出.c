#include <stdio.h>

int main(){
    short int a,b;
    a = 32767;  //32767 == 0b0111111111111111，32768 == 0b1000000000000000
    b = a + 1;
    printf("%d + 1 = %d\n",a,b);
    return 0;
}
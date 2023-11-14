#include <stdio.h>
int main(){
    float n;
    scanf("%f", &n);
    printf("%.2f", (int)(n * 100 + 0.5) / 100.0);
  //printf("%.2f",a);
    return 0;
}
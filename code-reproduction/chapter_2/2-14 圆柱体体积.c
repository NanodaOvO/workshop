#include "stdio.h"
#include "math.h"

void main(){
    float v,r,h;
    printf("pls input r & h :");
    scanf("%f%f",&r,&h);
    v = pow(r,2) * 3.14 * h;
    printf("r = %.2f, h = %.2f, v = %.2f",r,h,v);
}
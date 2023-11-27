# include <stdio.h>
int main(){
    int m,n,a,b,c,d;
    m=2,n=1,a=1,b=2,c=3,
    d=(m=a!=b)&&(n=b>c);
    printf("%d %d",n,m);
    return 0;
}
#include <stdio.h>
#include <math.h>

int Reverse(int);

int main(){
    int n;
    scanf("%d",&n);
    Reverse(n);
    return 0;
}


int Reverse(int n){
    int i;
    for(i=0;n>0;i++){
        if(n%10==0){
            n/=10;
            continue;
        }
        else{
            printf("%d",n%10);
            n/=10;
        }
    }
    return 0;
}
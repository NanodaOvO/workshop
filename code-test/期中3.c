# include <stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    printf("%.2f",(int)(a * 100 + 0.5) / 100.0);
    return 0;
}
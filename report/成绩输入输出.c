# include <stdio.h>

int main(){
    int a, b, c;
    float x, y, z, avr;
    printf("please input the 3 students' number:\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("please input the 3 students' points:\n");
    scanf("%f%f%f", &x, &y, &z);
    avr = (x + y + z) / 3;
    printf("%d号学生为%.2f分，%d号学生为%.2f分，%d号学生为%.2f分,",a, x, b, y, c, z);
    printf("平均分为%.2f分\n", avr);
    return 0;
}
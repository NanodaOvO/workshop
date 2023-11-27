#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *lhs, const void *rhs){
    return *(int*)rhs - *(int*)lhs ;
}

int main(){
    int a,b,c,n;
    char str1[32], str2[32], str3[32];
    printf("请输入三个学生的名字：\n");
    scanf("%s%s%s", str1, str2, str3);
    printf("请输入三个学生的成绩：\n");
    scanf("%d%d%d", &a, &b, &c);
    int values[] = {a, b, c};
    qsort(values, 3, sizeof(int), cmp);
    printf("最高分是%d，", values[0]);
    printf("最低分是%d\n", values[2]);
    return 0;
}
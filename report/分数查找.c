#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[32], str2[32], str3[32];
    char name[32];
    printf("请输入三个学生的名字：");
    scanf("%s%s%s", str1, str2, str3);
    int values[3];
    printf("请输入三个学生的成绩：");
    scanf("%d%d%d", &values[0], &values[1], &values[2]);
    printf("请输入学生姓名来查找成绩：");
    scanf("%s", name);
    if (strcmp(name, str1) == 0)
    {
        printf("%d\n", values[0]);
    }
    if (strcmp(name, str2) == 0)
    {
        printf("%d\n", values[1]);
    }
     if (strcmp(name, str3) == 0)
    {
        printf("%d\n", values[2]);
    }
    return 0;
}

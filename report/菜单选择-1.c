#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a == 1) printf("成绩输入\n");
    if (a == 2) printf("成绩删除\n");
    if (a == 3) printf("成绩查询\n");
    if (a == 4) printf("成绩排序\n");
    if (a == 5) printf("最高低分\n");
    if (a == 6) printf("统计平均分\n");
    if (a == 7) printf("显示成绩\n");
    if (a == 8) printf("退出系统\n");
    return 0;
}
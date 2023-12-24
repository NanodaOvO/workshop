#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("成绩输入\n");
        break;
    case 2:
        printf("成绩删除\n");
        break;
    case 3:
        printf("成绩查询\n");
        break;
    case 4:
        printf("成绩排序\n");
        break;
    case 5:
        printf("最高低分\n");
        break;
    case 6:
        printf("统计平均分\n");
        break;
    case 7:
        printf("显示成绩\n");
        break;
    case 8:
        printf("退出系统\n");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int score;
};

int main() {
    struct student students[3];
    char search_name[20];
    int i;

    // 获取学生信息
    for (i = 0; i < 3; i++) {
        printf("请输入第%d个学生的姓名和成绩（用空格分隔）：\n", i+1);
        scanf("%s %d", students[i].name, &students[i].score);
    }

    // 查找学生成绩
    printf("请输入要查找的学生姓名：\n");
    scanf("%s", search_name);

    for (i = 0; i < 3; i++) {
        if (strcmp(search_name, students[i].name) == 0) {
            printf("%s的成绩为：%d\n", search_name, students[i].score);
            break;
        }
    }

    if (i == 3) {
        printf("未找到该学生的成绩。\n");
    }

    return 0;
}

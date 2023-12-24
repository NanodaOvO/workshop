#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 114514

struct student {
    char name[50];
    int score;
};    

void inputScore(struct student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("请输入第%d个学生的姓名和成绩（用空格分隔）：\n", i+1);
        scanf("%s %d", students[i].name, &students[i].score);
    }
}

void deleteScore(struct student students[], int *numStudents, char *deleteName) {
    int found = 0;
    for (int i = 0; i < *numStudents; i++) {
        if (strcmp(deleteName, students[i].name) == 0) {
            found = 1;
            for (int j = i; j < *numStudents - 1; j++) {
                students[j] = students[j+1];
            }
            (*numStudents)--;
            printf("%s的成绩已被删除。\n", deleteName);
            break;
        }
    }
    if (!found) {
        printf("未找到该学生的成绩。\n");
    }
}

int main() {
    struct student students[MAX_STUDENTS];
    int numStudents = 0;
    int choice;

    while (1) {
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("请输入学生人数：");
                scanf("%d", &numStudents);
                inputScore(students, numStudents);
                break;
            case 2:
                char deleteName[50];
                printf("请输入要删除成绩的学生姓名：");
                scanf("%s", deleteName);
                deleteScore(students, &numStudents, deleteName);
                break;
            default:
                printf("无效选项，请重新输入。\n");
                break;
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 114514

struct student {
    char name[50];
    int score;
};

//1.成绩输入
void inputScore(struct student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("请输入第%d个学生的姓名和成绩（用空格分隔）：\n", i+1);
        scanf("%s %d", students[i].name, &students[i].score);
    }
}

//2.成绩删除
void deleteScore(struct student students[], int *numStudents, char deleteName) {
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

//3.成绩查询
void searchScore(struct student students[], int numStudents, char *searchName) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(searchName, students[i].name) == 0) {
            printf("%s的成绩为：%d\n", searchName, students[i].score);
        return;
        }
    }
    printf("未找到该学生的成绩。\n");
}

//4.成绩排序
void sortScore(struct student students[], int numStudents) {
    struct student temp;
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (students[j].score > students[j+1].score) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

//5.最高低分
void findMinMaxScore(struct student students[], int numStudents) {
    if (numStudents == 0) {
        printf("没有学生成绩可供查询。\n");
        return;
    }

    int maxScore = students[0].score;
    int minScore = students[0].score;

    for (int i = 1; i < numStudents; i++) {
        if (students[i].score > maxScore) {
            maxScore = students[i].score;
        }
        if (students[i].score < minScore) {
            minScore = students[i].score;
        }
    }

    printf("最高分：%d\n", maxScore);
    printf("最低分：%d\n", minScore);
}

//6.统计平均分
float calculateAverageScore(struct student students[], int numStudents) {
    if (numStudents == 0) {
        printf("没有学生成绩可供统计。\n");
        return 0.0;
    }

    int totalScore = 0;

    for (int i = 0; i < numStudents; i++) {
        totalScore += students[i].score;
    }

    float averageScore = (float) totalScore / numStudents;

    printf("平均分：%.2f\n", averageScore);

    return averageScore;
}

//7.显示成绩
void displayScore(struct student students[], int numStudents) {
    if (numStudents == 0) {
        printf("没有学生成绩可供显示。\n");
    }

    printf("学生成绩单：\n");

    for (int i = 0; i < numStudents; i++) {
        printf("姓名：%s，成绩：%d\n", students[i].name, students[i].score);
    }
}

//8.退出系统
void exitSystem() {
    printf("退出系统。\n");

}

int main() {
    struct student students[MAX_STUDENTS];
    int numStudents = 0;
    int choice;

    while (1) {
        printf("**************************************\n");
        printf("                主菜单                 \n");
        printf("**************************************");
        printf("\n    1 成绩输入         2 成绩删除      \n");
        printf("\n    3 成绩查询         4 成绩排序      \n");
        printf("\n    5 最高低分         6 统计平均分    \n");
        printf("\n    7 显示成绩         8 退出系统      \n");

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
            case 3: 
                char searchName[50];
                printf("请输入要查询的学生姓名：");
                scanf("%s", searchName);
                searchScore(students, numStudents, searchName);
                break;
            case 4: 
                sortScore(students, numStudents);
                printf("成绩已排序。\n");
                break;
            case 5:
                findMinMaxScore(students, numStudents);
                break;
            case 6:
                calculateAverageScore(students, numStudents);
                break;
            case 7:
                displayScore(students, numStudents);
                break;
            case 8:
                exitSystem();
                return 0;
            default:
                printf("无效选项，请重新输入。\n");
                break;
        }
    }

    return 0;
}
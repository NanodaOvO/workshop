#include <stdio.h>

int main() {
    // 定义变量
    int numStudents = 3;
    int i, j;

    // 存储学号和成绩的数组
    int studentNumbers[numStudents];
    float grades[numStudents][3];  // 每个学生有3门课程的成绩

    // 输入学号和成绩
    for (i = 0; i < numStudents; i++) {
        printf("请输入第 %d 个学生的学号: ", i + 1);
        scanf_s("%d", &studentNumbers[i]);

        // 输入每门课的成绩
        for (j = 0; j < 3; j++) {
            printf("请输入第 %d 个学生的第 %d 门课程成绩: ", i + 1, j + 1);
            scanf_s("%f", &grades[i][j]);
        }
    }

    // 输出学号、成绩及平均分
    printf("\n学号\t\t成绩1\t成绩2\t成绩3\t平均分\n");
    for (i = 0; i < numStudents; i++) {
        printf("%d\t\t", studentNumbers[i]);

        // 输出每门课的成绩
        float totalGrade = 0;
        for (j = 0; j < 3; j++) {
            printf("%.2f\t", grades[i][j]);
            totalGrade += grades[i][j];
        }

        // 计算并输出平均分
        float averageGrade = totalGrade / 3;
        printf("%.2f\n", averageGrade);
    }

    return 0;
}
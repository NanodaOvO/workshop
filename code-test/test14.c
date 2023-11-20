#include <stdio.h>
int main()
{
    // 定义四个变量，分别记录英文字母、空格、数字字符和其他字符的个数，初始值为0
    int letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0;

    // 定义一个字符变量，用来存储输入的字符
    char c;

    // 使用while循环，不断读取输入的字符，直到遇到#为止
    while (1)
    {
        // 读取一个字符
        scanf("%c", &c);
        // 如果是#，则跳出循环
        if (c == '#')
        {
            break;
        }
        // 否则，判断字符的类型，根据类型增加相应的变量的值
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        { // 如果是英文字母
            letter++;
        }
        else if (c == ' ')
        { // 如果是空格
            blank++;
        }
        else if (c >= '0' && c <= '9')
        { // 如果是数字字符
            digit++;
        }
        else
        { // 如果是其他字符
            other++;
        }
    }

    // 输出结果，按照样例的格式
    printf("letter=%d,blank=%d,digit=%d,other=%d\n", letter, blank, digit, other);
}
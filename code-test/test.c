#include <stdio.h>

int main(void)
{
    int rN = 0;   // 实部参数
    int iN = 0;   // 虚部参数
    int tmpN = 0; // 临时存储数据

    char ch;           // 当前字符
    char isRN = 1;     // tmpN中的数据是否是rN的数据
    char isExTmpN = 0; // tmpN中经过输入数据过程
    char p = 1;        // 符号参数

    while (ch = getchar())
    {
        if (ch == '\n')
        { // 输入结束
            if (isRN)
            { // rN输入结束且没有iN，储存rN
                rN = p * tmpN;
            }
            break;
        }
        else if (ch == '+' || ch == '-')
        { // 输入的是符号
            // 符号作为数据的结束
            if (tmpN && isRN)
            { // rN输入结束且有iN，储存rN
                rN = p * tmpN;
                tmpN = 0;
            }
            isExTmpN = 0; // 清除状态
            // 符号作为数据的开始
            if (ch == '+')
            {
                p = 1;
            }
            else
            {
                p = -1;
            }
        }
        else if (ch == 'i')
        { // 输入的是虚部结束的标志
            if (tmpN)
            { // tmpN不为0，iN输入结束，储存iN
                iN = p * tmpN;
            }
            else
            { // tmpN为0
                if (isExTmpN)
                { // 手动输入的0
                    iN = p * tmpN;
                }
                else
                { // 输入时省去了1
                    iN = p * 1;
                }
            }
            break;
        }
        else if (ch == ' ')
        { // 输入的是空格,跳过
            continue;
        }
        else
        { // 输入的是数字，储存数据
            isExTmpN = 1;
            tmpN *= 10;
            tmpN += ch - '0';
        }
    }

    if (rN || !iN)
        printf("%d", rN); // rN不为0或iN为0（输出0占位）

    if (iN == 1 || iN == -1)
    { // 参数为1时省略输出
        iN = -iN;
        printf("%ci", iN == 1 ? (rN && iN > 0 ? '+' : '\0') : '-'); // rN不为0且iN为正数时需要输出'+'连接两个部分，否则'+'可省略；'-'的输出由%d控制
    }
    else if (iN)
    {
        iN = -iN;
        printf("%c%di", rN && iN > 0 ? '+' : '\0', iN);
    }

    return 0;
}
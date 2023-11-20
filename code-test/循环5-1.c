#include <stdio.h>

int main(){
    int num = 0, let = 0, blk = 0, oth = 0;
    while (1)
    {
        char s;
        scanf("%c", &s);
        if (s >= 'A' && s<= 'Z' || s >= 'a' && s<= 'z')
        {
            let++;
        }
        else if (s >= '0' && s<= '9')
        {
            num++;
        }
        else if (s == 32)
        {
            blk++;
        }
        else if (s == '#')
        {
            break;
        }
        else 
        {
            oth++;
        }
    }
    printf("letter=%d,blank=%d,digit=%d,other=%d", let, blk, num, oth);
    return 0;
}
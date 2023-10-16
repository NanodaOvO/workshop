#include <stdio.h>

struct test
{
    char cA;
};


int main(void) {
    struct test T = {0};
    int cC = 0;
    int cD = 0;
    char cB = 0;
    
    scanf("%hhd %hhd", &T.cA, &cB);
    printf("%hhd %hhd", T.cA, cB);
    return 0;
}
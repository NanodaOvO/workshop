#include <stdio.h>

// 2 < n < 10000

int fib(int);

int main()
{
    int m, n;
    scanf("%d,%d", &m, &n);
    int i;
    for (i = 1; i < 100; i++)
    {
        if (fib(i) >= m && fib(i) <= n)
        {
            printf("%d ", fib(i));
            }
    }
    return 0;
}

int fib(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 1;
    }
    else
    {
        int a, b, fib, i;
        a = 1;
        b = 1;
        for (i = 3; i <= n; i++)
        {
            fib = a + b;
            a = b;
            b = fib;
        }
        return fib;
    }
}
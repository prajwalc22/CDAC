#include <stdio.h>
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);

    if (n < 0)
    {
        return 1;
    }

    printf("%d", fibo(n));
    return 0;
}

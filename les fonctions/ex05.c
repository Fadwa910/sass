#include <stdio.h>
int factor(int n)
{
    int res = 1;
    while (n>1)
    {
        res = res * n;
        n--;
    }
    return (res);
}
int main()
{
    int n = 5;
    int a = factor(n);
    printf("%d\n", a);
}

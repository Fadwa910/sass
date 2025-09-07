#include <stdio.h>
int multi(int a, int b)
{
    int multi;
    multi = a * b;
    return multi;
}
int main()
{
    int a = 3;
    int b = 3;
    int result = multi(a, b);
    printf("%d\n", result);
}
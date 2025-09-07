#include <stdio.h>
int max(int a, int b)
{
    
    if(a > b)
    {
        return a;
    }
    else if ( b > a)
    {
        return b;
    }
    else
    return 0;
}
int main()
{
    int a = 4;
    int b = 6;
    int y = max(a, b);
    printf("%d\n", y);
    
}
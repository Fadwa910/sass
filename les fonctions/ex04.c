#include <stdio.h>
int min(int a, int b)
{
    
    if(a < b)
    {
        return a;
    }
    else if ( b < a)
    {
        return b;
    }
    else
    return 0;
}
int main()
{
    int a = 6;
    int b = 4;
    int y = min(a, b);
    printf("%d\n", y);
    
}
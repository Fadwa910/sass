#include <stdio.h>
int main()
{
    int a;
    int b;
    
    printf("une nombre reel : ");
    scanf("%d", &a);
    printf("une nombre reel : ");
    scanf("%d", &b);
    printf("%d\n", a+b);
    printf("%d\n", a*b);
    printf("%d\n", a-b);
    printf("%d\n", a/b);
    return 0;
}
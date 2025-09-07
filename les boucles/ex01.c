#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    printf("table de multiplication : ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d\n", i*n);
        i++;
    }
}
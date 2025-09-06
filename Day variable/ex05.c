#include <stdio.h>
int main()
{
    int c;
    printf("la température en Celsius :");
    scanf("%d", &c);
    if(c < 0)
    {
        printf("solide ");
    }
    else if (0 <= c < 100)
    {
        printf("liquide");
    }
    else
    printf("gaz");
    return 0;
}
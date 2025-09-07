#include <stdio.h>
int main()
{
    int i = 0;
    int n;
    printf("entrer des chiffres : ");
    scanf("%d", &n);
    while ( n > 0)
    {
        int y = n % 10;
        n = n / 10;
        printf("%d", y);
        i++;
    }
    return 0;
}
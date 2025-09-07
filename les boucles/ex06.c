#include <stdio.h>
int main()
{
    int n;
    int nombre = 0;

    printf("un nombre entier n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        printf("%d\n", nombre);
        nombre = nombre + 2;
    }
    return 0;
}
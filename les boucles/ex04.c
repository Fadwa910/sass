#include <stdio.h>
int main()
{
    int n;
    int nombre = 1;

    printf("un nombre entier n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        nombre = nombre + 2;
        printf("%d\n", nombre);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n, i;
    int somme = 0;
    printf("nombre entier :");
    scanf("%d", &n);
    for(i=1; i<=n;i++)
    {
    somme = somme + i;
    }
    printf("%d\n", somme);
    return 0;
}
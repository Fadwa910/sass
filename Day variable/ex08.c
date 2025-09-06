#include <stdio.h>
int main()
{
    int n1;
    int n2;
    int n3;
    
    printf("premier nombre :");
    scanf("%d", &n1);
    printf("deuxieme nombre :");
    scanf("%d", &n2);
    printf("troisieme nombre :");
    scanf("%d", &n3);
    int moyenne_géométrique =(n1 * n2 * n3)^(1/3);
    printf("%d\n", moyenne_géométrique);
    return 0;
}
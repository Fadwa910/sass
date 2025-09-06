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
    int moyenne = (n1 * 2)+ (n1 * 3)+(n3 * 5);
    printf("%d\n", moyenne);
    return 0;
}
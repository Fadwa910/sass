#include <stdio.h>
int main()
{
    int base;
    int exposant;
    int result = 1;
    printf("entrer base : ");
    scanf("%d", &base);
    printf("exposant : ");
    scanf("%d", &exposant);
    for(int i = 1; i <= base; i++)
    {
        result = result * base;  
    }
    printf ("%d\n", result);
    return 0;
}
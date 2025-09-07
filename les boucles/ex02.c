#include <stdio.h>
int main()
{
    int n ,result = 1;
    int i;
    printf("nombre :");
    scanf("%d", &n);
    for(i= 1; i <= n; i++)
    {
        result = i * result;
    }
    printf("%d\n", result);
    return 0;

}
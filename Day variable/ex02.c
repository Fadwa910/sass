#include <stdio.h>
int main()
{
    int C;
    int K;
    printf(" la temperature en Celsius : ");
    scanf("%d", &C);
    K = C + 273.15;
    printf("transforme en kelvin : %d", K);
    return 0;
}
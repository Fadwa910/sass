#include <stdio.h>
int main()
{
    int Km;
    float Yards;
    printf("la distance en kilometres :");
    scanf("%d", &Km);
    Yards = Km * 1093.61;
    printf("transforme en yards : %f", Yards);
    return 0;
}
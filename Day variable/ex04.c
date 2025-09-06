#include <stdio.h>
int main()
{
    float km;
    float ms;
    printf("la vitesse en kilometres par heure :");
    scanf("%f", &km);
    ms = km * 0.27778;
    printf(" transforme en metres par seconde : %f", ms);
    return 0;
}
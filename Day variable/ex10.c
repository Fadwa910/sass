#include<stdio.h>
int main()
{
    int r;
    printf("entrer le rayon de la sphere :");
    scanf("%d",&r);
    float volume;
    volume = (4/3) * 3.14159 * r*r*r;
    printf("%.2f\n", volume);
    return 0;
}
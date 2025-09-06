#include<stdio.h>
#include<math.h>
int main()
{
    int x1;
    int x2;
    int y1;
    int y2;
    int z1;
    int z2;

    printf("entrer x1 :");
    scanf("%d", &x1);
    printf("entrer x2 :");
    scanf("%d", &x2);
    printf("entrer y1 :");
    scanf("%d", &y1);
    printf("entrer y2 :");
    scanf("%d", &y2);
    printf("entrer z1 :");
    scanf("%d", &z1);
    printf("entrer z2 :");
    scanf("%d", &z2);
    int distance;
    distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1));
    printf("%d\n", distance);
    return 0;
}
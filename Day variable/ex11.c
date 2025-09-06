#include <stdio.h>
int main()
{
    int longueur;
    int largeur;
    printf("la longuer :");
    scanf("%d", &longueur);
    printf("largeur :");
    scanf("%d", &largeur);
    int surface;
    surface = longueur * largeur;
    printf("%d\n", surface);
    return 0;
}
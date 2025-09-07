#include <stdio.h>
int somme( int a, int b)
{
    
    int somme;

    somme = a + b;
    return somme;
}
int main()
{
    int a = 3;
    int b = 3;
    int result = somme(a, b);
    printf("%d\n", result);  
}
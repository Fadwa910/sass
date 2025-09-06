#include <stdio.h>
int main()
{
    char nom[20]; char prenom[30]; int age; char sexe;
    char adresse_email[20];

    printf("entrer le nom : ");
    scanf("%s", &nom);
    
    printf("entrer le prenom : ");
    scanf("%s", &prenom);

    printf("entrer l'age : ");
    scanf("%d", &age);

    printf(" entrer le sexe : ");
    scanf(" %c", &sexe);

    printf(" entrer l'adresse : ");
    scanf(" %s", &adresse_email);

    printf("information : ");
        printf("nom : %s\n prenom : %s\n age : %d\n sexe : %c\n adresse_email : %s\n", nom, prenom, age, sexe, adresse_email);
    return 0;
}
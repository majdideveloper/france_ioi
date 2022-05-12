#include <stdio.h>
#include <string.h>
int main()
{
    int nbLignes;
    scanf("%d\n", &nbLignes);
    for (int idLigne = 0; idLigne < nbLignes; idLigne = idLigne + 1)
    {
        char ligneTexte[1001];
        scanf("%[^\n]\n", ligneTexte);
        int longueur = strlen(ligneTexte);
        for (int iCar = longueur - 1; iCar >= 0; iCar = iCar - 1)
        {
            printf("%c", ligneTexte[iCar]);
        }
        printf("\n");
    }
}
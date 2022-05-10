#include <stdio.h>
#include <string.h>
int main()
{
    int nbLivres, longueurPlusLongTitre = 0;
    scanf("%d\n", &nbLivres);
    for (int idLivre = 0; idLivre < nbLivres; idLivre = idLivre + 1)
    {
        char titreLivre[1001];
        scanf("%[^\n]\n", titreLivre);
        int longueurTitre = strlen(titreLivre);
        if (longueurTitre > longueurPlusLongTitre)
        {
            longueurPlusLongTitre = longueurTitre;
            printf("%s\n", titreLivre);
        }
    }
}
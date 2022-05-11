#include <stdio.h>
#include <string.h>
int main()
{
    int nbLignes, nbMots;
    int histogramme[101] = {0};
    scanf("%d%d\n", &nbLignes, &nbMots);
    for (int idLigne = 0; idLigne < nbLignes; idLigne = idLigne + 1)
    {
        for (int idMot = 0; idMot < nbMots; idMot = idMot + 1)
        {
            char mot[101];
            scanf("%s", mot);
            int longueur = strlen(mot);
            histogramme[longueur] = histogramme[longueur] + 1;
        }
    }
    for (int longueur = 1; longueur <= 100; longueur = longueur + 1)
    {
        if (histogramme[longueur] > 0)
        {
            printf("%d : %d\n", longueur, histogramme[longueur]);
        }
    }
}
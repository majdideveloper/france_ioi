#include <stdio.h>
int main()
{
    int nbPersonnes;
    char nom[101], prenom[101];
    scanf("%d\n", &nbPersonnes);
    for (int idPersonne = 0; idPersonne < nbPersonnes; idPersonne = idPersonne + 1)
    {
        scanf("%s", prenom);
        scanf("%s", nom);
        printf("%s %s\n", nom, prenom);
    }
}
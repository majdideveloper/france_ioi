#include <stdio.h>
int main()
{
    int nbLignes;
    char ligne[101];
    scanf("%d\n", &nbLignes);
    for (int idLigne = 1; idLigne <= nbLignes; idLigne = idLigne + 1)
    {
        scanf("%[^\n]\n", ligne);
        if (idLigne % 2 == 1)
        {
            printf("%s\n", ligne);
        }
    }
}
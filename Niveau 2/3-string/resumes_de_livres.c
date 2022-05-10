#include <stdio.h>
#include <string.h>
int main()
{
    int nbLivre, nbCara;
    scanf("%d%d", &nbLivre, &nbCara);
    char titreLivre[101];
    char desLivre[60];
    for (int i = 0; i < nbLivre; i++)
    {
        scanf("%[^\n]\n", titreLivre);
        scanf("%[^\n]\n", desLivre);
        if (strlen(desLivre) < nbCara)
            printf("%s", titreLivre);
    }
}
// solution of problem
/*#include <stdio.h>
#include <string.h>
int main()
{
   int nbLivres, longueurMinimale;
   char titre[1001], resume[1001];
   scanf("%d", &nbLivres);
   scanf("%d\n", &longueurMinimale);
   for (int idLivre = 0; idLivre < nbLivres; idLivre = idLivre + 1)
   {
      scanf("%[^\n]\n", titre);
      scanf("%[^\n]\n", resume);
      if (strlen(resume) < longueurMinimale)
      {
         printf("%s\n", titre);
      }
   }
}
*/
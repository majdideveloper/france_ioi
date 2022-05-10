#include <stdio.h>
#include <string.h>
int main()
{
    char titreLivre[201];
    char auteurLivre[201];
    for (int i = 0; i < 6; i++)
    {

        scanf("%[^\n]\n", auteurLivre);
        scanf("%[^\n]\n", titreLivre);
        printf("%s", titreLivre);
        printf("%s", auteurLivre);
    }
}
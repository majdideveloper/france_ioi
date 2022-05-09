#include <stdio.h>
int main()
{
    int nbPT, nbC;
    scanf("%d%d", &nbPT, &nbC);
    int tabP[nbPT];

    for (int i = 0; i < (nbPT); i++)
    {
        int value;
        scanf("%d", &value);
        tabP[i] = value;
    }

    for (int i = 0; i < nbC; i++)
    {
        int p1, p2, p1C, p2C;
        scanf("%d", &p1);
        scanf("%d", &p2);
        p1C = tabP[p1];
        p2C = tabP[p2];
        tabP[p1] = p2C;
        tabP[p2] = p1C;
    }
    for (int i = 0; i < (nbPT); i++)
    {
        printf("%d\n", tabP[i]);
    }
}
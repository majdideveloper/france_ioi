#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
#include <math.h>
int main()
{

    int nbPersonnes, nbFruits;
    scanf("%d%d", &nbPersonnes, &nbFruits);
    if ((nbFruits % nbPersonnes) == 0)
    {
        printf("oui");
    }
    else
    {
        printf("non");
    }
}
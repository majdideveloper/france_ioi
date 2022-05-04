#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
#include <math.h>
int main()
{

    int nbZones, nubZ, rest;
    scanf("%d", &nbZones);
    if (nbZones >= 0)
    {
        rest = nbZones % 24;

        nubZ = rest;
    }
    else
    {
        nbZones = -nbZones;
        rest = nbZones % 24;
        if (rest == 0)
        {
            nubZ = rest;
        }
        else
        {
            nubZ = 24 - (nbZones % 24);
        }
    }
    printf("%d", nubZ);
}
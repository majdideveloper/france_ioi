#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
#include <math.h>
int main()
{

    int argent, prix, numLivre;
    scanf("%d%d", &argent, &prix);
    numLivre = argent / prix;

    printf("%d", numLivre);
}
#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
#include <math.h>
int main()

{
    int nbProduit, nbPersonne;
    scanf("%d%d", &nbProduit, &nbPersonne);
    int produits[nbProduit];
    for (int _loop = 0, _max = nbProduit - 1; _loop <= _max; _loop++)
    {
        produits[_loop] = 0;
    }
    for (int i = 1, _max = nbPersonne; i <= _max; i++)
    {
        int value;
        scanf("%d", &value);
        produits[value]++;
    }
    for (int _loop = 0, _max = nbProduit - 1; _loop <= _max; _loop++)
    {
        printf("%d\n", produits[_loop]);
    }
}
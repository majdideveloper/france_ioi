#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
#include <math.h>
int main()

{
    int produitStok[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int nbOperations = 0, number = 0, position = 0;
    scanf("%d", &nbOperations);
    for (int _loop = 1, _max = nbOperations; _loop <= _max; _loop++)
    {
        scanf("%d%d", &position, &number);
        if (number > 0)
        {
            produitStok[position - 1] += number;
        }
        else if (number < 0)
        {
            produitStok[position - 1] += number;
        }
    }
    for (int _loop = 0, _max = 9; _loop <= _max; _loop++)
    {
        printf("%d\n", produitStok[_loop]);
    }
}
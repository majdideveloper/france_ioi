#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
#include <math.h>
int main()
{

    int numberPop, valueF;
    double moyenneC;
    scanf("%d%lf", &numberPop, &moyenneC);
    valueF = floor(((numberPop * moyenneC) / 100) + numberPop);

    printf("%d", valueF);
}
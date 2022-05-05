#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
#include <math.h>
int main()
{

    double cimentKG;
    int numberSac, prixF, intCiment;
    scanf("%lf", &cimentKG);
    intCiment = ceil(cimentKG);
    if (intCiment % 60 == 0)
    {
        numberSac = (intCiment / 60);
    }
    else
    {
        numberSac = (intCiment / 60) + 1;
    }
    prixF = numberSac * 45;
    printf("%d", prixF);
}

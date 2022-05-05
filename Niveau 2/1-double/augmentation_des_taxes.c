#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
#include <math.h>
int main()
{

    double vActTax, nValTax, prixAct, prixSansTax, nouvPrix;
    scanf("%lf%lf%lf", &vActTax, &nValTax, &prixAct);
    prixSansTax = (prixAct / (1 + vActTax / 100));
    nouvPrix = prixSansTax * (1 + (nValTax / 100));

    printf("%.2f", nouvPrix);
}
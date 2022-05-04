#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{

    int number;
    scanf("%d", &number);
    repeat(number)
    {

        double age, poids, prix, prixKg;
        number *= 2;
        scanf("%lf%lf%lf", &poids, &age, &prix);
        prixKg = prix / poids;
        printf("%lf", prixKg);
    }
}
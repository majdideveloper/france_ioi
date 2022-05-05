#include <stdio.h>
int main()
{
    int nbCharrettes;
    double poidCharretter, sum;
    scanf("%d", &nbCharrettes);
    double poidCharretters[nbCharrettes];

    for (int i = 0; i <= nbCharrettes - 1; i++)
    {

        poidCharretters[i] = 0.0;
    }

    for (int i = 0; i <= nbCharrettes - 1; i++)
    {
        scanf("%lf", &poidCharretter);
        poidCharretters[i] = poidCharretter;
        sum += poidCharretter;
    }
    double value = sum / nbCharrettes;
    double diff;
    for (int i = 0; i <= nbCharrettes - 1; i++)
    {
        diff = value - poidCharretters[i];

        printf("%.3f\n", diff);
    }
}
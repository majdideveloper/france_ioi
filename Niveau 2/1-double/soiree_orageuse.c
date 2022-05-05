#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
#include <math.h>
int main()
{

    double number;
    int distance = 0;
    scanf("%lf", &number);
    distance = round((number * 340.29) / 1000); // divise  1000 for kilometer
    printf("%d", distance);
}

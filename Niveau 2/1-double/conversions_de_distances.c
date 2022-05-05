#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{

    double number, result;
    scanf("%lf", &number);

    result = number / 0.707;
    printf("%lf", result);
}
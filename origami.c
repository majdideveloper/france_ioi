#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{

    double number = 0.011;
    repeat(15)
    {
        number *= 2;
    }

    printf("%lf", number);
}
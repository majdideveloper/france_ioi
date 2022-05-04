#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{

    int note = 0, number;
    double moyenne;
    scanf("%d", &number);
    repeat(number)
    {

        scanf("%d", &note);
        moyenne += note;
    }
    moyenne = moyenne / number;
    printf("%lf", moyenne);
}
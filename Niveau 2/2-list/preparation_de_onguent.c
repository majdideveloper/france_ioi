#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
#include <math.h>
int main()

{
    int nbJours[10] = {500, 180, 650, 25, 666, 42, 421, 1, 370, 211};
    int number;
    scanf("%d", &number);
    printf("%d", nbJours[number]);
}
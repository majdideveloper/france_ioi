#include <stdio.h>
#include <string.h>
int main()
{
    char nom[51];
    scanf("%[^\n]", nom);
    int codeA = nom[0];

    if ((codeA >= 65) && (codeA < 71))
    {
        printf("1");
    }
    else if ((codeA > 71) && (codeA <= 80))
    {
        printf("2");
    }
    else if ((codeA > 80) && (codeA < 91))
    {
        printf("3");
    }
}
#include <stdio.h>
int main()
{
    int nbDeplacement;
    scanf("%d", &nbDeplacement);
    int listDeplacement[nbDeplacement];
    for (int i = 0; i <= nbDeplacement - 1; i++)
    {
        int value;
        scanf("%d", &value);
        listDeplacement[i] = value;
    }
    for (int i = nbDeplacement; i >= 0; i--)
    {

        if (listDeplacement[i] == 4)
        {
            printf("5\n");
        }
        if (listDeplacement[i] == 5)
        {
            printf("4\n");
        }
        if (listDeplacement[i] == 2)
        {
            printf("1\n");
        }
        if (listDeplacement[i] == 1)
        {
            printf("2\n");
        }
        if (listDeplacement[i] == 3)
        {
            printf("3\n");
        }
    }
}
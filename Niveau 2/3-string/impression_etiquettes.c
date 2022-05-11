#include <stdio.h>
#include <string.h>
int main()
{
    char ph[51];
    scanf("%[^\n]%*c", ph);
    int lenPh = strlen(ph);
    for (int i = 0; i < lenPh; i++)
    {
        printf("%c\n", ph[i]);
    }
}
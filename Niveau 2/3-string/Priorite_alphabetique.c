#include <stdio.h>
#include <string.h>
int main()
{
    char mot1[201];
    char mot2[201];
    scanf("%s", mot1);
    scanf("%s", mot2);
    int cMot1 = mot1[0];
    int cMot2 = mot2[0];
    if (cMot1 > cMot2)
    {
        printf("%s", mot2);
    }
    else if (cMot1 == cMot2)
    {
        return 0;
    }
    else
    {
        printf("%s", mot1);
    }
}
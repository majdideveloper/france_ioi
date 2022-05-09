#include <stdio.h>

int main()
{
    int numberE;
    scanf("%d", &numberE);
    int tabE[numberE];
    for (int i = 0; i < numberE; i++)
    {
        int position;
        scanf("%d", &position);
        tabE[position] = i;
    }
    for (int i = 0; i < numberE; i++)
        printf("%d", tabE[i]);
}
// solution from Youtube Coding be TOUNSI
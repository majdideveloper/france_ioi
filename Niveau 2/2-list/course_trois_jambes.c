#include <stdio.h>
#include <stdlib.h>
int compareEntier(const void *pEntier1, const void *pEntier2)
{
   return (*(int *)(pEntier1) - *(int *)(pEntier2));
}
int main()
{
    int number,midValue;
     int value;
    scanf("%d", &number);
    int tabNumber[number];
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&value);
        tabNumber[i]=value;
    }
    qsort(tabNumber, number, sizeof(int), compareEntier);
    if (number/2==0)
    {
    midValue=(number/2);
    }
    else{
    midValue=(number/2)-1
    }
    for(int i =0 ; i<=midValue;i++){
    
          printf("%d %d\n",tabNumber[i],tabNumber[(number-1)]);
          number--;
    }
  
}
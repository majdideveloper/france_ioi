#include <stdio.h>
void attendreCode()
{
   int tentative;
   do
   {
      printf("Entrez le code :\n");
      scanf("%d", &tentative);
   }
   while (tentative != 4242);
}
int main()
{
   attendreCode();
   printf("Encore une fois.\n");
   attendreCode();
   printf("Bravo.\n");
}

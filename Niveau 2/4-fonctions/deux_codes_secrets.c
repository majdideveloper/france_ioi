#include<stdio.h>

void attendreCode(){



	int tentative ;
	do {
	printf("Entrez le code :\n");

		scanf("%d", &tentative );

	}while(tentative != 4242)

		printf("Premier code bon.");
	do {
		printf("Entrez le code:\n");
		scanf("%d", &tentative );

	}while(tentative !=2121)





int main (){attendreCode()

 }
/*#include <stdio.h>
void attendreCode(int codeSecret)
{
   int tentative;
   do
   {
      printf("Entrez le code :\n");
      scanf("%d", &tentative);
   }
   while (tentative != codeSecret);
}
int main()
{
   attendreCode(4242);
   printf("Premier code bon.\n");
   attendreCode(2121);
   printf("Bravo.\n");
}*/
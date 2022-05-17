
#include <stdio.h>
void repet(int number){
   for (int i =0 ;i<number; i++){
      printf("X");

   }
      printf("\n");
   
   for (int i =0 ;i<number; i++){
      printf("#");

   }
      printf("\n");
for (int i =0 ;i<number; i++){
      printf("i");

   }
}
int main (  ){
   int number;
   scanf("%d",&number);
   repet( number);
}}

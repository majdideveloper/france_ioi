#include<stdio.h>
int min2(int numberA ,int numberB){
	int min ;
	if (numberB>numberA && min>numberA){
		min = numberA;
	}else if (numberB<numberA && min>numberB){
		min = numberB;
	}
	return min;
}
int main (){
	int numberB,numberA,min;
	
	for (int i =0 ; i <5; i++){
	    scanf("%d%d",&numberB,&numberA);
	min=min2(numberA,numberB);
	}
printf("%d",min);
}
/*#include<stdio.h>
int min2(int numberA ,int numberB){
 
   if (numberB>numberA ){
      
      return numberA;
   } else if (numberB<numberA ){
      return numberB;
   }
   
}
int main (){
   int min;
   scanf("%d",&min);

   for (int i =0 ; i <9; i++){
   int value;
       scanf("%d",&value);
   min = min2(min,value);
   
   }
 
printf("%d",min);
}*/

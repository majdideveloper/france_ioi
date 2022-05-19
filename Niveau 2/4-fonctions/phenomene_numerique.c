#include <stdio.h>
int  nextTerm(int nb){
	int nextNb;
	if ((nb % 2)!=0){
nextNb=(nb *3)+1;
	}else{
		nextNb =nb/2;
	}
	return nextNb;
} 
int main (){
	int number;
	scanf("%d",&number);
	do {
		number = nextTerm(number);
printf("%d ",number);
	}while (number!=1);
}


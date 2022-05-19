
#include <stdio.h>
void motifRectan(int nbLine,int nbRepeat,char cara  ){
for (int i =0;i<nbLine;i++){

for(int j=0 ;j<nbRepeat;j++){
printf("%c",cara);


}
    printf("\n");
}

	
}
int main (){
	int nbLine,nbRepeat;
	char cara;
	scanf("%d%d",&nbLine,&nbRepeat);
	scanf(" %c" ,&cara);
	motifRectan(nbLine,nbRepeat,cara);
}




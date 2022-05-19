#include <stdio.h>
void printLine(int number,char motif){
	for (int i =0;i<number;i++){
		printf("%c",motif);
	}
}

void printRec(int nbLignes, int nbColonnes )
{

	for (int i =1;i<=nbLignes;i++){
		for (int j =1;j <=nbColonnes;j++){
			if (i==1||i==nbLignes||j==1|| j==nbColonnes)
				printf("#");
			else{
				printf(" ");

			}
		}
	} 
}
void printTri(int nbTri){
	 for (int i =0; i<nbTri ;i++){
        for (int j =0; j<=i;j++){
            if (j==0||j==i||i==nbTri)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
} 


int main () {
	int nbCara,nbLine,nbColon,nbTri ;
	scanf("%d",&nbCara);
	printLine(nbCara,'X');
	printf("\n");

	scanf("%d%d",&nbLine,&nbColon);
	printRec(nbLine,  nbColon);

	printf("\n");
	scanf("%d",&nbTri);
	printTri(nbTri);

}
/*#include <stdio.h>
void printLine(int number,char motif){
	for (int i =0;i<number;i++){
		printf("%c",motif);
	}
}

void printRec(int nbLignes, int nbColonnes )
{

	for (int i =1;i<=nbLignes;i++){
		for (int j =1;j <=nbColonnes;j++){
			if (i==1||i==nbLignes||j==1|| j==nbColonnes)
				printf("#");
			else
				printf(" ");

			}
			printf("\n");
		}
	} 

void printTri(int nbTri){
	 for (int i = 1; i<=nbTri ;i++){
        for (int j =1; j<=i;j++){
            if (j==1||j==i||i==nbTri)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
} 


int main () {
	int nbCara,nbLine,nbColon,nbTri ;
	scanf("%d",&nbCara);

	

	scanf("%d%d",&nbLine,&nbColon);
	

	
	scanf("%d",&nbTri);
		printLine(nbCara,'X');
		printf("\n\n");
		printRec(nbLine,  nbColon);
		printf("\n\n");
	printTri(nbTri);

}
*/

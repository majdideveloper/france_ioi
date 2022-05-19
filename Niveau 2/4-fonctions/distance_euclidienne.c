#include <stdio.h>
#include <math.h>
double resulat(double x1,double x2,double y1,double y2){
	double resulatX,resulatY,resulatFinal;
	resulatX = (x2-x1);
	resulatX = pow(resulatX, 2.0);

	resulatY = (y2-y1);
	resulatY = pow(resulatY, 2.0);
resulatFinal = resulatX + resulatY;
return resulatFinal = sqrt(resulatFinal);

}
int main (  ){
	double x1,x2,y1,y2,res;
	scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
res =	resulat( x1,  x2,  y1,  y2);
printf("%lf",res);
}

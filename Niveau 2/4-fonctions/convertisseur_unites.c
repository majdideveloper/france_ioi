#include <stdio.h>
void convert (double number, char cara){
   switch (cara){
      case 'm':
         number= number*3.28083989;
         cara ='p';
         break;
      case'g':
         number = number*0.002205;
         cara= 'l';
         break;
      case 'c':
         number=(number*1.8)+32;
         cara= 'f';
         break;


   }
   printf("%lf  %c\n",number,cara);
}

int  main (){
   int num;
   scanf("%d",&num);
   for (int i=0;i<num ;i++){
      double number;
      char cara;
      scanf("%lf %c",&number,&cara);
      convert(number,  cara);
   }

}


///DIGIT COUNTING
#include<stdio.h>
#include<conio.h>

      int main()
         {
             int No = 0,DCnt = 0,Temp =0;
           UP:
             printf("\n Enter An +ve Integer = ");
             scanf("%d",&No);

             if( No <= 0)
             {
                 printf("\n Please Enter a +ve Value.");
                 goto UP;
             }
           Temp = No;

             while(Temp > 0)
             {
                 Temp = Temp/10;
                 DCnt++;
             }
             printf("\n The Count of Number %d is = %d",No,DCnt);

             getch();
             return 0;
         }

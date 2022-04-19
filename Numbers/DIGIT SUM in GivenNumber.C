///DIGIT SUM
#include<stdio.h>
#include<conio.h>

      int main()
         {
             int No = 0,Dsum = 0,dig = 0,Temp =0;

             UP:
                 printf("\n Enter Number To Calculate SUM = ");
                 scanf("%d",&No);

                 if(No < 0)
                 {
                     printf("\n Enter A Positive Integral Number.");
                     goto UP;
                 }

                 Temp = No;

                 while(Temp > 0)    ///DIGIT SUM LOGIC.
                 {
                     dig =Temp % 10;
                     Dsum = Dsum + dig;
                     Temp= Temp / 10;
                 }

             printf("\n The Sum of Given Number %d is = %d",No,Dsum);

             getch();
             return 0;
         }

#include<stdio.h>
#include<conio.h>

int main()
{
   int Base = 0 ,Exp = 0,  Temp = 0;
   long int Pow = 0;
   printf("\n Enter Base : ");
   scanf("%d", &Base);

   printf("\n Enter Exponent : ");
   scanf("%d", &Exp);

   for(Pow =1,Temp =Exp ; Temp > 0; Temp--)
   {
       printf("\n Pow = %-9d * %-5d = %-10d",Pow,Base,(Pow * Base));
       Pow = Pow * Base ;
   }

   printf("\n\n\t ==> Power  (%d)^(%d) = %d.",Base,Exp,Pow);


   getch();
   return 0 ;


}

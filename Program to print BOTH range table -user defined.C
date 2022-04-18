///Program to print BOTH range table -user defined

#include<stdio.h>
#include<conio.h>

int main()
{
   int C = 0, R = 0, SNum = 0, ENum = 0;

   printf("\n Enter First Number : ");
   scanf("%d",&SNum);

   printf("\n Enter last Number :  ");
   scanf("%d",&ENum);


if(SNum < ENum)         ///FORWARD RANGE
{


   for(R = 1; R<=10; R++)
   {

       for(C =SNum; C<=ENum; C++)
       {

           printf(" %3d ",(R * C));

       }
       printf("\n");
   }
}
else                ///BACKWARD RANGE
{
    for(R = 1; R<=10; R++)
   {

       for(C =SNum; C>=ENum; C--)
       {

           printf(" %3d ",(R * C));

       }
       printf("\n");

}


}
getch();
return 0;
}

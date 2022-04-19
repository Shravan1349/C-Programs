#include<stdio.h>
#include<conio.h>

int main()
{

    int R = 0, C = 0,SNum = 0,ENum = 0;




    printf("\n Enter First Number :  ");
    scanf("%d",&SNum);

    printf("\n Enter Second Number : ");
    scanf("%d",&ENum);



   for( R = 1; R <=10 ; R++)
   {
       for( C = SNum;  C<=ENum ; C++)

       {

           printf(" %3d ",(C * R) );
       }
       printf("\n");
   }

    getch();
    return 0;

}

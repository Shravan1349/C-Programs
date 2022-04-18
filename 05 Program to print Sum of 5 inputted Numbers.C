#include<stdio.h>
#include<conio.h>

int main()
{

    int i = 0,  No = 0 ,Sum = 0;

        for( i = 1; i<=5 ;i++)
        {

            printf(" \n Enter a Number %d = ",i);
            scanf("%d",&No);

            Sum = Sum + No;
        }

        printf("\n The Sum of Your Given Numbers is : %d",Sum);

        getch();
        return 0;

}

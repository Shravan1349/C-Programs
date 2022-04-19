#include<stdio.h>
#include<conio.h>

int main()
{

    int Num = 0 , Cnt = 0 ;

    printf("\n Enter a Number to print the Table : ");
    scanf("%d", &Num);

    for( Cnt = 1; Cnt <=10 ; Cnt++)
    {

        printf(" \n %d",(Num * Cnt));

    }
    printf("\n\n This is The Table of %d" , Num);

    getch();
    return 0;

}

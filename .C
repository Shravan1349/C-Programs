///Program To Print a Table.

#include<stdio.h>
#include<conio.h>

int main()
{

    int i = 1, cnt = 1;

    printf("/n Enter a number to print a table  :  ");
    scanf("%d",&i);

    for(cnt = 1; cnt<=10 ; cnt ++)
    {

        printf("\n %d",(i * cnt) );

    }
    getch();
    return 0;


}

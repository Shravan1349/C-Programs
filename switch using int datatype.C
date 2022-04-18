//Switch statement using INT datatype

#include<stdio.h>
#include<conio.h>

int main()
{

    int Day = 0;

    printf("\n Enter A Day Number = ");
    scanf("%d",&Day);


    switch(Day)
    {

    case 1 :

             printf("\n Monday");
             break;

    case 2 :

             printf("\n Tuesday");
             break;

    case 3 :

             printf("\n Wednesday");
             break;

    case 4 :

             printf("\n Thursday");
             break;

    case 5 :

             printf("\n Friday");
             break;

    case 6 :

             printf("\n Saturday");
             break;

    case 7 :

             printf("\n Sunday");
             break;

    default :

            printf("\n  INVALID DAY Number.");


    }
    printf("\n\n Enjoy Your Day.\n\n Thanks....");

    getch();
    return 0;


}

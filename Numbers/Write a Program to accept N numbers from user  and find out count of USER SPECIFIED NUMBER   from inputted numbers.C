///Program to accept N numbers from user
///Find Count USER SPECIFIED Number..


#include<stdio.h>
#include<conio.h>


int main()
{
	int Num = 0,i = 0,Mark = 0, MCnt = 0;

	printf("\n Enter Marks Of Student : ");
	scanf("%d",Mark);

	printf("\n Enter !0 Students Marks to find %d Marks of students in it ==>\n",Mark);

	for(i=1;i<=10;i++)
    {

        printf("\n Enter Number %d = ",i);
        scanf("%d",Num);

    }

	printf("\n\t**** ");
	printf("\n\n Count Of  USER SPECIFIED %d Numbers = %d",Num,MCnt);
	printf("\n\n\t**** ");

	printf("\n Thanks For input");


return 0;
}


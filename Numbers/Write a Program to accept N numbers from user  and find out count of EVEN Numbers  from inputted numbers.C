///Program to accept N numbers from user
///Find Count of EVEN Numbers..


#include<stdio.h>
#include<conio.h>


int main()
{
	int N = 0 ,Num = 0, Inp = 0, ECnt = 0;

	printf("Enter Numbers you Want = ");
	scanf("%d",&N);

	for(Num = 1; Num <= N; Num++)
	{
		printf("\n Enter Number %d= ",Num);
		scanf("%d",&Inp);

		if(Inp % 2 == 0)
		{
			printf("\n Zero updated");

			ECnt++;
		}
	}

	printf("\n\t**** ");
	printf("\n\n Count Of  Even Numbers = %d",ECnt);
	printf("\n\n\t**** ");

	printf("\n Thanks For input");


return 0;
}


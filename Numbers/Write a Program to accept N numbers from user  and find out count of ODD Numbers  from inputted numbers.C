///Program to accept N numbers from user
///Find Count of ODD Numbers..


#include<stdio.h>
#include<conio.h>


int main()
{
	int N = 0 ,Num = 0, Inp = 0, Sum = 0;

	printf("Enter Numbers you Want = ");
	scanf("%d",&N);

	for(Num = 1; Num <= N; Num++)
	{
		printf("\n Enter Number %d= ",Num);
		scanf("%d",&Inp);

		if(Inp <= 0)
		{
			Sum = Sum + Num;
		}
	}


	printf("\n\n Addition Of Given Numbers is  = %d",Sum);


	printf("\n Thanks For input");


return 0;
}


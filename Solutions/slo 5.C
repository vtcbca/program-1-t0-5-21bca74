#include<stdio.h>
#include<conio.h>
void main()
{
	int c,d,sum;
	sum=0;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&c);
	while(c>0)
	{
		d=c%10;
		sum=sum+d;
		c=c/10;
	}
	printf("\n Sum: %d",sum);
	getch();
}

/* Write a program to enter any number and print in reverse number
Date:24 dec 2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int q,r;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&q);
	while(q>0)
	{
		r=q%10;
		printf("%d",r);
		q=q/10;
	}
	getch();
}
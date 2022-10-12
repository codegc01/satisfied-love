#include<stdio.h>
#include<conio.h>
void main()
{
	long int n,rev=0;
	clrscr();
	printf("\nEnter any number :");
	scanf("%ld",&n);
	do
	{
		rev=rev*10;
		rev=rev+n%10;
		n=n/10;
	}while(n>0);
	printf("\n%ld",rev);
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	long int n,rev=0;
	clrscr();
	printf("\nEnter any number :");
	scanf("%ld",&n);
	for(;n>0;)
	{
		rev=rev*10;
		rev=rev+n%10;
		n=n/10;
	}
	printf("\n%ld",rev);
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,fact=1;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\ntotal fact of %d this number is %d",n,fact);
	getch();
}
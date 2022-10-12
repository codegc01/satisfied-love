#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,fact=1;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	i=1;
	do
	{
		fact=fact*i;
		i++;
	}while(i<=n);
	printf("\ntotal fact of %d this number is %d",n,fact);
	getch();
}
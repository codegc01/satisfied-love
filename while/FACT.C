#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,fact=1;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\ntotal fact of %d this number is %d",n,fact);
	getch();
}
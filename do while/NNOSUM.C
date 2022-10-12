#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	i=1;
	do
	{
		sum=sum+i;
		i++;
	}while(i<=n);
	printf("\nSum total of %d this number is %d",n,sum);
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nSum total of %d this number is %d",n,sum);
	getch();
}
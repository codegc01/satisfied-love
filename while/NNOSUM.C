#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("\nSum total of %d this number is %d",n,sum);
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\n%d",i);
	}
	getch();
}
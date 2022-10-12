#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,c;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%c",91-i);
	}
	getch();
}
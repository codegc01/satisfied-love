#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,c;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("\n%c",91-i);
		i++;
	}while(i<=n);
	getch();
}
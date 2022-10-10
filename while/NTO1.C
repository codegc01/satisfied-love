#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		printf("\n%d",i);
		i--;
	}
	getch();
}
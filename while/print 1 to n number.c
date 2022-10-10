#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n%d",i);
		i++;
	}
	getch();
}

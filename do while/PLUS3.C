#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,s=1;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("%d\t",s);
		s=s+3;
		i++;
	}while(i<=n);
	getch();
}
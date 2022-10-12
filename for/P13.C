#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,s=1;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",s);
		s=s+i+1;
	}
	getch();
}
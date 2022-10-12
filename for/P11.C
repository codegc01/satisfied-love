#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i*i);
	}
	getch();
}
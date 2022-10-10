#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,s=1;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d\t",s);
		s=s+i+1;
		i++;
	}
	getch();
}
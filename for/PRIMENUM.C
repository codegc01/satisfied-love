#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=2;
		while(j<=i)
		{
			if(i%j==0)
			{
				break;
			}
			j++;
		}
		if(i==j)
		{
			printf("%d\t",j);
		}
	}
	getch();
}
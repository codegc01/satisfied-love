#include<stdio.h>
#include<conio.h>
void main()
{
	int i,t1,t2,nt,n;
	clrscr();
	printf("\nEnter any one number :");
	scanf("%d",&n);
	t1=0;
	t2=1;
	nt=0;
	for(i=3;i<=n;i++)
	{
		printf("%d\t",nt);
		t1=t2;
		t2=nt;
		nt=t1+t2;
		i++;
	}
	getch();
}
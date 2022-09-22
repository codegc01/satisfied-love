#include<stdio.h>
#include<conio.h>
void main()
{
	int a1,a2,a3,b1,b2,b3,ab1,ab2,ab3,ab4;
	clrscr();
	printf("\t\t\t*************************\n");
	printf("\t\t\t*      FIND AB BAR      *\n");
	printf("\t\t\t*************************\n");
	printf("\n Enter three value of A : ");
	scanf("%d %d %d",&a1,&a2,&a3);
	printf("\n Enter three value of B : ");
	scanf("%d %d %d",&b1,&b2,&b3);
	ab1 = b1-a1;
	ab2 = b2-a2;
	ab3 = b3-a3;
	printf("\n b - a = %di %+dj %+dk",ab1,ab2,ab3);
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int a1,a2,a3,b1,b2,b3,ab1,ab2,ab3,AB1,AB2,AB3;
	clrscr();
	printf("\t\t\t***********************\n");
	printf("\t\t\t*   MANAK MA AB BAR   *\n");
	printf("\t\t\t***********************\n");
	printf("\n Enter three value of A : ");
	scanf("%d %d %d",&a1,&a2,&a3);
	printf("\n Enter three value of B : ");
	scanf("%d %d %d",&b1,&b2,&b3);
	ab1 = b1 - a1;
	ab2 = b2 - a2;
	ab3 = b3 - a3;
	printf("\n b - a = %di %+dj %+dk\n\n",ab1,ab2,ab3);
	AB1 = ab1 * ab1;
	AB2 = ab2 * ab2;
	AB3 = ab3 * ab3;
	printf("	%d %+d %+d\n",AB1,AB2,AB3);
	AB1 = AB1 + AB2 + AB3;
	printf(" Manak ma AB bar = %d",AB1);
	getch();
}
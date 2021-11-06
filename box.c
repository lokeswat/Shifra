#include"basic.h"
#include"gotoxy.h"

int main()
{
	int y=15;
	gotoxy(56,y);
	int i,j,n=40;
	getch();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n;j++)
		{
			if(i==1||j==1||i==n||j==2*n)
			printf("*");
			else
			printf(" ");
		}
		gotoxy(55,++y);
	}
	gotoxy(70,27.5);
	printf("hello");
	getch();
}

#ifndef CHOICE
#define CHOICE

#include"list.h"
#include"apprisal.h"
#include"fired.h"
#include"box.h"

void choice()
{
system("cls");
int n;
box();
system("COLOR F1");
gotoxy(70,17);
printf("1.List the employees");
gotoxy(70,21);
printf("2.Aprisal Results");
gotoxy(70,25);
printf("3.Fired Employee List :{ ");
gotoxy(60,29);
printf("----------------------------------------------------------");
gotoxy(70,33);
scanf("%d",&n);
	switch(n)
	{
		case 1:
			lis();
			break;
			
		case 2:
			apr();
			break;
			
		case 3:
			fire();
			break;
			
		default:
			printf("\nINVLIAD INPUT !! \n");
			exi();
	}
	
}

#endif

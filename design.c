#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	system("cls");
	printf("pattern");
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=i;j++)
		{
		
		printf("%d",i);
	}
		printf("\n");	
		
	}
	for(i=0;i<=10;i++)
	{
		for(j=1;j<=i;j++)
		{
		
		printf("*****");
	}
		printf("\n");	
		
	}
	
	
	
	getch();
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[]="kirti",str2[]="shukla";
	if(strcmp(str,str2)==0)
	printf("strings are equal:");
	else
	printf("strings are not equal:");
	char  str4[]="somya",str3[10];
	strcpy(str3,str4);
	printf(" \n %s",str4);
	printf(" \n %d",strlen(str2));
	
	
	
	getch();
	
	
	
	return 0;
	
}

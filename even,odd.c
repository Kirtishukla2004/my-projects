#include <stdio.h>
void main()
{
    int number;
 
    printf("Enter a number to check even or odd");
    scanf("%d", &number);
 
    if(( number >> 1) <<1==number)
          printf("%d is even.", number);
    else
        printf("%d is odd.", number);
        getch();
    
}



#include <stdio.h>
#include<conio.h>

int main()
{
    int i, num;
    unsigned long long fact=1LL;

    
    printf("Enter any number to calculate factorial: ");
    scanf("%d", &num);

    
    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d = %llu", num, fact);
    getch();
    return 0;
}


#include <stdio.h>
#include <conio.h>
void main()
{
    int A,B,C;
    printf("enter the value of A,B,C");
    scanf("%d%d%d",&A,&B,&C);
    if(A>B)
    {
        if(A>C)
        printf("A is greater");
        else
        printf("C is greater");
    }
    else
    {
        if(B>C) 
        printf("B is greater");
        else
        printf("C is greater");
    }
    
    getch();
}
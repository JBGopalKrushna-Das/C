#include <stdio.h>
#include <conio.h>
void main()
{
    int A;
    printf("enter your age");
    scanf("%d",&A);
    if(A >= 18)
    {
        printf("eligible for voting");
    }
    if(A<18)
    {
        printf("eligible for voting");
    }
    getch();
}
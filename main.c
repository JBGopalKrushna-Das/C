#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a<0){
        printf("negetive number");
    }
    if(a>0){
        printf("positive number");
    }
    getch();
}
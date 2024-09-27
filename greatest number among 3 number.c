#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a,b,c");
    scanf("%d""%d""%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("a is greatest number=%d",a);
        else
        printf("c is greater number=%d",c);
    }
    else
    {
        if (b>c)
        printf("b is greater number=%d",b);
        else
        printf("c is greater nubmer=%d",c);
    }
    getch();
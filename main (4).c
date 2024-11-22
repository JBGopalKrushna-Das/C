
#include <stdio.h>
#include <conio.h>
void main()
{
    float A,T,a,b,c,d,e;
    printf("enter the value of a,b,c,d,e");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    T=a+b+c+d+e;
    A=T/5;
    printf("the output of total no. of student=%f",T);
     printf("the output of average no. of student=%f",A);
    getch();
}
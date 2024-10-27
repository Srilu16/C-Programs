#include<stdio.h>
int sum(int x,int y);
void main()
{
int a;
int b;
printf("Please give a and b : ");
scanf("%d %d",&a,&b);
sum(a,b);
}

int sum(int x,int y)
{
printf("The sum of %d + %d is %d",x,y,x+y);
}

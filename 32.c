#include<stdio.h>
int a;
int b;
int sum();
void main()
{
printf("Please give a and b : ");
scanf("%d %d",&a,&b);
printf("The sum of %d + %d is %d",a,b,sum());
}

int sum()
{
return a+b;
}

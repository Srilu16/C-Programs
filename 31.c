#include<stdio.h>
int a;
int b;
int sum();
void main()
{

printf("Please give a and b : ");
scanf("%d %d",&a,&b);
sum();
}

int sum()
{
int s;
s=a+b;
printf("The sum of %d + %d is %d",a,b,s);
}

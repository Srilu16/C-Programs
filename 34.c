#include<stdio.h>
int sum();
void main()
{
int a;
int b;
printf("Please give a and b : ");
scanf("%d %d",&a,&b);
printf("The sum of %d and %d is %d",a,b,sum(a,b)); //The sum() function is defined to take two parameters, int x and int y, so it should be  called with arguments (sum())
}

int sum(int x,int y)
{
return x+y;
}

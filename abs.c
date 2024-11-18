#include<stdio.h>
int n;
int abso();
void main()
{
printf("Please give the number : ");
scanf("%d",&n);
printf("The absolute value is %d",abso());
}

int abso()
{
if(n<0)
return -n;
else
return n;
}
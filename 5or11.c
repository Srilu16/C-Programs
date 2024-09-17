#include<stdio.h>
void main()
{
int a;
printf("Please give the number:");
scanf("%d",&a);
if(a%5==0 && a%11==0)
{
printf("The number %d is divisible",a);
}
else
printf("The number %d is not divisible",a);
}
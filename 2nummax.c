#include<stdio.h>
void main()
{
int a,b;
printf("Give the first integer:");
scanf("%d",&a);
printf("Give the second integer:");
scanf("%d",&b);
if(a<b)
{
printf("The maximum number is %d",b);
}
else
{
printf("The maximum number is %d",a);
}
}

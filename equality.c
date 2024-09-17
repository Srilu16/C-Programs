#include<stdio.h>
void main()
{
int a,b;
printf("Give the first integer:");
scanf("%d",&a);
printf("Give the second integer:");
scanf("%d",&b);
if(a>b)
{
printf("Maximum number is %f",a);
}
else if(a==b)
{
printf("Both numbers are equal");
}
else
{
printf("Maximum number is %f",b);
}
}
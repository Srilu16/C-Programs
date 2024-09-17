#include<stdio.h>
void main()
{
float a;
printf("Give the integer:");
scanf("%f",&a);
if(a<0)
{
printf("%.2f is negative",a);
}
else if(a>=0)
{
printf("%.2f is positive",a);
}
else
printf("%.2f is 0",a);
}
#include<stdio.h>
void main()
{
int a1,a2,a3,total;
printf("Give the angles of the triangle:");
scanf("%d%d%d",&a1,&a2,&a3);
total=a1+a2+a3;
if(total==180)
{
printf("The given triangle is valid");
}
else
printf("The given triangle is invalid");
}

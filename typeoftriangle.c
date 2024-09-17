#include<stdio.h>
void main()
{
int s1,s2,s3;
printf("Give the sides of the triangle:");
scanf("%d%d%d",&s1,&s2,&s3);
if(s1==s2 && s2==s3)
{
printf("The given triangle is equilateral");
}
else if(s1==s2 || s2==s1 || s1==s3)
{
printf("The given triangle is isoceles");
}
else
printf("The given triangle is scalene");
}

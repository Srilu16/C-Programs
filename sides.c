#include<stdio.h>
void main()
{
int s1,s2,s3;
printf("Give the sides of the triangle:");
scanf("%d%d%d",&s1,&s2,&s3);
if(s3<s1+s2||s2<s1+s3||s1<s2+s3)
{
printf("The given triangle is valid");
}
else
printf("The given triangle is invalid");
}

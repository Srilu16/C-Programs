#include<stdio.h>
void main()
{
int num;
printf("Give the integer:");
scanf("%d",&num);
if(num%2==0)
{
printf("The given number %d is even",num);
}
else
{
printf("The given number %d is odd",num);
}
}
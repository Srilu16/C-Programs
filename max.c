#include<stdio.h>
void main()
{
int a,b,c,max;
printf("Give the numbers:");
scanf("%d%d%d",&a,&b,&c);
max=a;
if(max<b)
{
max=b;
}
if(max<c)
{
max=c;
}
printf("The maximum number is %d",max);
}
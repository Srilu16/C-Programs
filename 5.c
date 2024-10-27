#include<stdio.h>
int max();
int a;
int b;
int c;
void main()
{
printf("Please provide the three numbers : ");
scanf("%d %d %d",&a,&b,&c);
printf("The largest number is : %d",max());
}
int max()
{
  if(a>b && a>c)
{
return a;
}
if(b>a && b>c)
{
return b;
}
else
{
return c;
}
}
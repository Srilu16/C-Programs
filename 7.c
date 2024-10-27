#include<stdio.h>
int abs(int x);

void main()
{
int a;
printf("Give the integer :");
scanf("%d",&a);
printf("The absolute value of %d is %d",a,abs(a));
}

int abs(int x)
{
if(abs<0)
return (-x);
else
return x;
}

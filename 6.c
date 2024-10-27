#include<stdio.h>
int evenOdd(int x);

void main()
{
int a;
printf("Give the integer :");
scanf("%d",&a);
evenOdd(a);
}

int evenOdd(int x)
{
if(x%2==0)
printf("Even");
else
printf("Odd");
}

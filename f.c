#include<stdio.h>
void main()
{
int a=0,b=1;
int sum=0;
int noofterms; 
printf("Enter the no.of terms:");
scanf("%d",&noofterms);
for(int i=0;i<noofterms;i++)
{
sum=a + b;
printf("%d\n",sum);
a=b; 
b=sum;
}
}

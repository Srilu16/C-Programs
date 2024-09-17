#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,det;
float r1,r2;
printf("Give the value of a,b,c in expression ax^2+by+c=0 : ");
scanf("%d%d%d",&a,&b,&c);
det=(b*b)-(4*a*c);
if(det==0)
{
printf("O Points");
}
else if(det>0)
{
printf("20 Points");
}
else
printf("10 Points");
}

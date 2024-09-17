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
r1=r2;
r1=(-b)/2.0*a; // 2.0 to ensure division is done with floating point numbers
printf("The roots of %dx+%dy+%d are equal and the root is %.2f\n",a,b,c,r1);
}
else if(det>0)
{
r1=((-b)+sqrt(det))/2.0*a;
r2=((-b)-sqrt(det))/2.0*a;
printf("The roots of %dx+%dy+%d are %.2f and %.2f",a,b,c,r1,r2);
}
else
printf("The roots of %dx+%dy+%d are not real",a,b,c);
}

#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,r1,r2;
printf("Give value of a:");
scanf("%f",&a);
printf("Give value of b:");
scanf("%f",&b);
printf("Give value of c:");
scanf("%f",&c);
d=(b*b)-(4*a*c);
if(d>0)
{
r1=(-b+sqrt(d))/ (2*a);
r2=(-b-sqrt(d))/ (2*a);
printf("Roots are real and distinct, Roots are %f and %f",r1,r2);
}
else if(d==0)
{
r1=r2=-b/(2*a);
printf("Roots are equal, Roots are %f\n",r1,r2);
}
else
{ 
printf("Roots are not real\n");
}
}

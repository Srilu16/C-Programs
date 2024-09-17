#include<stdio.h>
void main()
{
int salary,hra,da,gross;
printf("Give the basic salary : ");
scanf("%d",&salary);
if(salary<=10000)
{
hra=((20.0/100)*salary);
da=((80.0/100)*salary);
}
if(salary<=20000)
{
hra=((25.0/100)*salary);
da=((90.0/100)*salary);
}
else
hra=((30.0/100)*salary);
da=((95.0/100)*salary);
gross=salary+hra+da;
printf("The basic salary is %d\n",salary);
printf("The HRA is %d\n",hra);
printf("The basic DA is %d\n",da);
printf("The gross salary is %d",gross);
}




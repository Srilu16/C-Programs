#include<stdio.h>
void main()
{
int avg;
printf("Give the average marks of the students : ");
scanf("%d",&avg);
if(avg>80)
{
printf("A Grade");
}
else if(avg>60 && avg<=80)
{
printf("B Grade");
}
else if(avg>40 && avg<=60)
{
printf("C Grade");
}
else 
printf("Fail");
}
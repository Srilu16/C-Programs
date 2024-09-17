#include<stdio.h>
void main()
{
float weight,height,h,bmi;
printf("Give the Weight in kg : ");
scanf("%f",&weight);
printf("Give the Height in m : ");
scanf("%f",&height);
h=height*height;
bmi=weight/h;
printf("BMI is %.2f\n",bmi);
if (bmi>0 && bmi<18.5)
{
printf("Underweight");
}
else if(bmi>=18.5 && bmi<25)
{
printf("Normal Weight");
}
else if(bmi>=25)
{
printf("Overweight");
}
else
printf("Invalid input");
}



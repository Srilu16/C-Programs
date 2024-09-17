#include<stdio.h>
void main()
{
float h,r,w,pay;
printf("The no.of hours worked?");
scanf("%f",&h);
printf("The rate per hour worked?");
scanf("%f",&r);
printf("The no.of weeks in a month?");
scanf("%f",&w);
pay=h * w * r;
printf("Pay is %.2f\n",pay);  //.2f for round off to 2 decimal places and \n for output in next pline instead of same line
}

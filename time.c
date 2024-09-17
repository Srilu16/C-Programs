#include<stdio.h>
#include<math.h>
int main()
{
int seconds,hours,minutes,total;// we need only int because no decimals only integer value will be there
printf("Enter the total number of seconds:");
scanf("%d",&total);
hours=total/3600;
minutes=(total%3600)/60;
seconds=(total%3600)%60;
printf("The given time %ds is %dhrs,%dmins ,%dsecs",total,hours,minutes,seconds);
}

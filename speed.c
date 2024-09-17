#include<stdio.h>
#include<math.h>
void main()
{
float d,t,s;
printf("Give the distance in km:");
scanf("%f",&d);
printf("Give the time taken in mins:");
scanf("%f",&t);
s=d/t;
printf("The speed is %.2f km/mins\n",s);
}
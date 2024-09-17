#include<stdio.h>
#include<math.h>
void main()
{
float f,c;
printf("Give the temperature in Farenheit:");
scanf("%f",&f);
c=((f-32)*5)/9;
printf("The given temperature %.2f F in Celcius Scale is %.2f",f,c);
} 
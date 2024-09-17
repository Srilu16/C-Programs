#include<stdio.h>
void main()
{
float amt,dis=0,namt=0;  // initialize the value as 0 first
printf("Provide the amount spent for the purchase : ");
scanf("%f",&amt);
if(amt>0 && amt<=1000)
{
dis=(5*amt)/100;
}
else if(amt>1000 && amt<=5000)
{
dis=(10*amt)/100;
}
else if(amt>5000 && amt<=10000)
{
dis=(20*amt)/100;
}
else
printf("Invalid Input");
namt=amt-dis;
printf("The discount is %.2f\n",dis);
printf("The amount after discount is %.2f",namt);
}


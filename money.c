#include<stdio.h>
void main()
{
int rup,two,five,hund,fifty,ten;
printf("Give the total amount in rupees:");
scanf("%d",&rup);
two=rup/2000;
rup=rup-(two*2000);
five=rup/500;
rup=rup-(five*500);
hund=rup/100;
rup=rup-(hund*100);
fifty=rup/50;
rup=rup-(fifty*50);
ten=rup/10;
rup=rup-(ten*10);
printf("%d notes of 2000\n",two);
printf("%d notes of 500\n",five);
printf("%d notes of 100\n",hund);
printf("%d notes of 50\n",fifty);
printf("%d notes of 10\n",ten);
}

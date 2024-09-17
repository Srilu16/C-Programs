#include<stdio.h>
void main()
{
int p,c,m,b,cs,total,perc;
printf("Give the Physics,Chemistry,Math,Biology,Computer Science : ");
scanf("%d%d%d%d%d",&p,&c,&m,&b,&cs);
total=(p+c+m+b+cs);
perc=(total*100)/500; // we can't do (total/500)*100 because then we might get fraction since total/500 and since integer division it will omit the decimal part so we do total*100 first so decimal part remains
if (perc>=90)
{
printf("GRADE A");
}
else if (perc>=80)
{
printf("GRADE B");
}
else if (perc>=70)
{
printf("GRADE C");
}
else if (perc>=60)
{
printf("GRADE D");
}
else if (perc>=40)
{
printf("GRADE E");
}
else
printf("FAIL");
}



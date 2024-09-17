#include<stdio.h>
void main()
{
int cp,sp,diff;
printf("Provide the cost price : ");
scanf("%d",&cp);
printf("Provide the selling price : ");
scanf("%d",&sp);
diff=sp-cp;
if (diff>0)
{
printf("It is a profit of %d",diff);
}
else if(diff<0)
{
diff=-diff;
printf("It is a loss of %d",diff);
}
else
printf("It is neither a profit nor a loss");
}

 